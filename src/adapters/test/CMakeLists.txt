SUBPACKAGE(adaptersTest adapters)
set(
   adaptersTestUtils_src
)

set(
   adaptersTest_moc_headers
)

set(
   adaptersTest_src
    src/adaptersTest.cpp
    src/VisibilitiesAdapterTest.cpp
)

#QT4_WRAP_CPP(adaptersTest_src ${adaptersTest_moc_headers})
#SUBPACKAGE_LIBRARY(adaptersTestUtils ${adaptersTestUtils_src})
#SUBPACKAGE_SET_EXTERNAL_LIBRARIES(
#	${QT_QTCORE_LIBRARY}
#)
add_executable(adaptersTest ${adaptersTest_src} )
target_link_libraries(adaptersTest ${SUBPACKAGE_LIBRARIES} ${CPPUNIT_LIBRARIES} )
add_test(adaptersTest adaptersTest )
