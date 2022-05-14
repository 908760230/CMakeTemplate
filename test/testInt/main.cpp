#include "gtest/gtest.h"

bool func()
{
    return true;
}

TEST(ExampleTest, SimpleFirstTest)
{
    EXPECT_TRUE(func());
}