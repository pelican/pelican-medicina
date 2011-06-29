#ifndef VISIBILITIESADAPTER_H
#define VISIBILITIESADAPTER_H


#include "pelican/core/AbstractStreamAdapter.h"

/**
 * @file VisibilitiesAdapter.h
 */

namespace pelican {
namespace medicina {

/**
 * @class VisibilitiesAdapter
 *  
 * @brief
 *    Converts a chunk of the Medicina Visibility
 *    data stream into a suitable DataBlob
 * @details
 * 
 */

class VisibilitiesAdapter : public AbstractStreamAdapter
{
    public:
        VisibilitiesAdapter( const ConfigNode& config );
        ~VisibilitiesAdapter();

        virtual void deserialise(QIODevice* in);

    private:
};

} // namespace medicina
} // namespace pelican
#endif // VISIBILITIESADAPTER_H 
