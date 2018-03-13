#include <gtest/gtest.h>
#include "CParam.h"

class CParamUT : public ::testing::TestWithParam<bool>
{
    protected:
        void SetUp();

};

void CParamUT::SetUp()
{
    
}


TEST_P(CParamUT, ParamUTCase1)
{
    EXPECT_TRUE(GetParam());
}

INSTANTIATE_TEST_CASE_P(CParamWithBool, CParamUT, ::testing::Bool());
