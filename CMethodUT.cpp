
#include <gtest/gtest.h>
#include"CMethod.h"

TEST(CMethodTest, Greater)
{
    EXPECT_TRUE(IsGreater(2, 1));
}

TEST(CMethodTest, Less)
{
    EXPECT_FALSE(IsGreater(1, 2));
}

TEST(CMethodTest, Equal)
{
    //This Case will fail
    EXPECT_FALSE(IsGreater(2, 1));
}