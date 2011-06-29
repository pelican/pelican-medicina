SUBPACKAGE(adapters)

set( adapters_src
     src/VisibilitiesAdapter.cpp
)
SUBPACKAGE_LIBRARY(adapters ${adapters_src} )
SUBPACKAGE_SET_EXTERNAL_LIBRARIES(
    ${PELICAN_LIBRARIES}
    ${QT_QTCORE_LIBRARY}
)

add_subdirectory(test)
