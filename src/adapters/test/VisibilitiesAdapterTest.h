#ifndef VISIBILITIESADAPTERTEST_H
#define VISIBILITIESADAPTERTEST_H

#include <cppunit/extensions/HelperMacros.h>

/**
 * @file VisibilitiesAdapterTest.h
 */

namespace pelican {

namespace medicina {

/**
 * @class VisibilitiesAdapterTest
 *  
 * @brief
 * 
 * @details
 * 
 */

class VisibilitiesAdapterTest : public CppUnit::TestFixture
{
    public:
        CPPUNIT_TEST_SUITE( VisibilitiesAdapterTest );
        CPPUNIT_TEST( test_method );
        CPPUNIT_TEST_SUITE_END();

    public:
        void setUp();
        void tearDown();

        // Test Methods
        void test_method();

    public:
        VisibilitiesAdapterTest(  );
        ~VisibilitiesAdapterTest();

    private:
};

} // namespace medicina
} // namespace pelican
#endif // VISIBILITIESADAPTERTEST_H 
