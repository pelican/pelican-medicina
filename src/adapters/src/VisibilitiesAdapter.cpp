#include "VisibilitiesAdapter.h"

namespace pelican {
namespace medicina {

/**
 *@details VisibilitiesAdapter 
 */
VisibilitiesAdapter::VisibilitiesAdapter( const ConfigNode& config )
    : AbstractStreamAdapter(config)
{
}

/**
 *@details
 */
VisibilitiesAdapter::~VisibilitiesAdapter()
{
}

void VisibilitiesAdapter::deserialise(QIODevice* in)
{
}

} // namespace medicina
} // namespace pelican
