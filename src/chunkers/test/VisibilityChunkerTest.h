#ifndef VISIBILITYCHUNKERTEST_H
#define VISIBILITYCHUNKERTEST_H

#include <cppunit/extensions/HelperMacros.h>

/**
 * @file VisibilityChunkerTest.h
 */

namespace pelican {

namespace medicina {

/**
 * @class VisibilityChunkerTest
 *  
 * @brief
 * 
 * @details
 * 
 */

class VisibilityChunkerTest : public CppUnit::TestFixture
{
    public:
        CPPUNIT_TEST_SUITE( VisibilityChunkerTest );
        CPPUNIT_TEST( test_method );
        CPPUNIT_TEST_SUITE_END();

    public:
        void setUp();
        void tearDown();

        // Test Methods
        void test_method();

    public:
        VisibilityChunkerTest(  );
        ~VisibilityChunkerTest();

    private:
};

} // namespace medicina
} // namespace pelican
#endif // VISIBILITYCHUNKERTEST_H 
