#include "developer.hpp"
#include <gtest/gtest.h>

class DeveloperTest : public ::testing::Test {
protected:
    
    SeniorDeveloper seniorDev{"Alice", "The Ace"};
    JuniorDeveloper juniorDev{"Bob", "The Rookie"};
};

TEST_F(DeveloperTest, ConstructorTest) {

    EXPECT_EQ(seniorDev.get_dev_name(), "Alice");
    EXPECT_EQ(seniorDev.get_dev_alias(), "The Ace");

    EXPECT_EQ(juniorDev.get_dev_name(), "Bob");
    EXPECT_EQ(juniorDev.get_dev_alias(), "The Rookie");
}