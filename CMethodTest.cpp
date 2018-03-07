
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
    EXPECT_FALSE(IsGreater(2, 1));
}