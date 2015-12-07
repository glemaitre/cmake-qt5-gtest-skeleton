// Include our own code
#include <common/dummy.h>

// Include the gtest library
#include <gtest/gtest.h>

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name 
// * The test name
TEST(DummyBuild, NoInitialisation) {
    
    DummyClass a;
    GTEST_ASSERT_EQ(a.getDummyVariable(), 0);
}
