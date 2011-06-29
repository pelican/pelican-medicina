#ifndef VISIBILITYCHUNKER_H
#define VISIBILITYCHUNKER_H


#include "pelican/server/AbstractChunker.h"

/**
 * @file VisibilityChunker.h
 */

namespace pelican {

namespace medicina {

/**
 * @class VisibilityChunker
 *  
 * @brief
 *    Chops the incomming Visibility data stream into
 *    appropriate size chunks for computation
 * @details
 * 
 */

class VisibilityChunker : public AbstractChunker
{
    public:
        VisibilityChunker( const ConfigNode& config );
        ~VisibilityChunker();

        /// Create a new device appropriate to the type expected on the data stream.
        virtual QIODevice* newDevice();

        /// Called whenever there is data ready to be processed.
        /// Derived classes must process a complete data chunk in this method.
        virtual void next(QIODevice*);

    private:
};

PELICAN_DECLARE_CHUNKER(VisibilityChunker)

} // namespace medicina
} // namespace pelican
#endif // VISIBILITYCHUNKER_H 
