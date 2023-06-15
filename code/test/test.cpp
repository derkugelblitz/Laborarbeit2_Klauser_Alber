#include "developer.hpp"
#include <gtest/gtest.h>

// Test fixture for Developer tests
class DeveloperTest : public ::testing::Test {
protected:
    // Test objects
    SeniorDeveloper seniorDev{"Alice", "The Ace"};
    JuniorDeveloper juniorDev{"Bob", "The Rookie"};
};

// Test the constructors of SeniorDeveloper and JuniorDeveloper
TEST_F(DeveloperTest, ConstructorTest) {

    // Check if the name and alias are initialized correctly for SeniorDeveloper
    EXPECT_EQ(seniorDev.get_dev_name(), "Alice");
    EXPECT_EQ(seniorDev.get_dev_alias(), "The Ace");

    // Check if the name and alias are initialized correctly for JuniorDeveloper
    EXPECT_EQ(juniorDev.get_dev_name(), "Bob");
    EXPECT_EQ(juniorDev.get_dev_alias(), "The Rookie");
}