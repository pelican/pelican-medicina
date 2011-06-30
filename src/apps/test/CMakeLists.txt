SUBPACKAGE(appsTest apps)
set(
   appsTestUtils_src
)

set(
   appsTest_moc_headers
)

set(
   appsTest_src
    src/appsTest.cpp
)

#QT4_WRAP_CPP(appsTest_src ${appsTest_moc_headers})
#SUBPACKAGE_LIBRARY(appsTestUtils ${appsTestUtils_src})
#SUBPACKAGE_SET_EXTERNAL_LIBRARIES(
#   ${QT_QTCORE_LIBRARY}
#)
add_executable(appsTest ${appsTest_src} )
target_link_libraries(appsTest ${SUBPACKAGE_LIBRARIES} ${CPPUNIT_LIBRARIES} )
add_test(appsTest appsTest )
