
#include <gtest/gtest.h>
#include "MockA.h"

using ::testing::Return;

TEST(ClassA, MockA)
{
    MockA l_A;
    
    EXPECT_CALL(l_A, GetValue()).WillOnce(Return(2));

    EXPECT_TRUE(l_A.GetValue() == 2);
}

