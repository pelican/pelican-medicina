SUBPACKAGE(chunkersTest chunkers)
set(
   chunkersTestUtils_src
)

set(
   chunkersTest_moc_headers
)

set(
   chunkersTest_src
    src/chunkersTest.cpp
)

#QT4_WRAP_CPP(chunkersTest_src ${chunkersTest_moc_headers})
#SUBPACKAGE_LIBRARY(chunkersTestUtils ${chunkersTestUtils_src})
#SUBPACKAGE_SET_EXTERNAL_LIBRARIES(
#	${QT_QTCORE_LIBRARY}
#)
add_executable(chunkersTest ${chunkersTest_src} )
target_link_libraries(chunkersTest ${SUBPACKAGE_LIBRARIES} ${CPPUNIT_LIBRARIES} )
add_test(chunkersTest chunkersTest )
