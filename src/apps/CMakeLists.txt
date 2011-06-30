SUBPACKAGE(apps chunkers)
#set( apps_src
#     
#)
#SUBPACKAGE_LIBRARY(apps ${apps_src} )
add_executable( pelicanServer serverMain.cpp )
target_link_libraries( ${SUBPACKAGE_LIBRARIES} )
add_subdirectory(test)
