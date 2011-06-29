#include "VisibilityChunker.h"
#include <QtNetwork/QUdpSocket>
#include <iostream>


namespace pelican {

namespace medicina {


/**
 *@details VisibilityChunker 
 */
VisibilityChunker::VisibilityChunker( const ConfigNode& config )
    : AbstractChunker( config )
{
}

/**
 *@details
 */
VisibilityChunker::~VisibilityChunker()
{
}

QIODevice* VisibilityChunker::newDevice()
{
    QUdpSocket* socket = new QUdpSocket;
    if (!socket->bind(port(), QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint ))
        std::cerr << "VisibilityChunker::newDevice(): "
             << "Unable to bind to UDP port!" 
             << socket->errorString().toStdString() << std::endl;

    return socket;

}

void VisibilityChunker::next(QIODevice*)
{
}

} // namespace medicina
} // namespace pelican
