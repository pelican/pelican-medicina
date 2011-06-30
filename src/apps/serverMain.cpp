#include "pelican/server/PelicanServer.h"
#include "pelican/comms/PelicanProtocol.h"
#include "pelican/utility/Config.h"

#include "pelican-medicina/chunkers/VisibilityChunker.h"

#include <QtGui/QApplication>
#include <boost/program_options.hpp>
namespace opts = boost::program_options;

#include <cstdlib>
#include <iostream>

// Prototype for function to create a pelican configuration XML object.
pelican::Config createConfig(int argc, char** argv);

int main(int argc, char** argv)
{
    QCoreApplication app(argc, argv);

    try {
        pelican::Config config = createConfig(argc, argv);
        pelican::PelicanServer server(&config);
        server.addStreamChunker("VisibilityChunker");

        // Add the protocol
        pelican::AbstractProtocol* protocol = new pelican::PelicanProtocol;
        server.addProtocol(protocol, 2000);

        // Start the server.
        server.start();
        while (!server.isReady()) {}
        return app.exec();
    }
    catch (const QString& err)
    {
        std::cerr << "ERROR: " << err.toStdString() << std::endl;
    }

}


/**
 * @details
 * Create a Pelican Configuration XML document for the lofar data viewer.
 */
pelican::Config createConfig(int argc, char** argv)
{
    // Check that argc and argv are nonzero
    if (argc == 0 || argv == NULL) throw QString("No command line.");

    // Declare the supported options.
    opts::options_description desc("Allowed options");
    desc.add_options()
        ("help,h", "Produce help message.")
        ("config,c", opts::value<std::string>(), "Set configuration file.");


    // Configuration option without a selection flag in the first argument
    // position is assumed to be a config file
    opts::positional_options_description p;
    p.add("config", -1);

    // Parse the command line arguments.
    opts::variables_map varMap;
    opts::store(opts::command_line_parser(argc, argv).options(desc)
            .positional(p).run(), varMap);
    opts::notify(varMap);

    // Check for help message.
    if (varMap.count("help")) {
        cout << desc << endl;;
        exit(0);
    }

    // Get the configuration file name.
    std::string configFilename = "";
    if (varMap.count("config"))
        configFilename = varMap["config"].as<std::string>();

    pelican::Config config;
    if (!configFilename.empty())
        config = pelican::Config(QString(configFilename.c_str()));

    return config;
}
