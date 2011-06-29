SUBPACKAGE(chunkers)
set( chunkers_src
     src/VisibilityChunker.cpp
)
SUBPACKAGE_LIBRARY(chunkers ${chunkers_src} )
SUBPACKAGE_SET_EXTERNAL_LIBRARIES(
    ${PELICAN_LIBRARIES}
    ${QT_QTNETWORK_LIBRARY}
    ${QT_QTCORE_LIBRARY}
)

add_subdirectory(test)
