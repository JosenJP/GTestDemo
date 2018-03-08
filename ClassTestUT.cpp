
#include <gtest\gtest.h>
#include "ClassTest.h"

class ClassTestCase1 : public testing::Test
{
    protected:
        virtual void SetUp()
        {
            m_TestClass.SetValues(2, 2);
        }


    ClassTest m_TestClass;
};

TEST_F(ClassTestCase1, SumWithParam)
{
    short l_Value1 = 2;
    short l_Value2 = 3;
    short l_Sum = m_TestClass.Sum(l_Value1, l_Value2);

    EXPECT_EQ((l_Value1 + l_Value2), l_Sum);
}

TEST_F(ClassTestCase1, SumWithoutParam)
{
    short l_Sum = 4;
    EXPECT_EQ(l_Sum, m_TestClass.Sum());
}

TEST_F(ClassTestCase1, SumWithoutParam2)
{
    short l_Sum = 0;
    EXPECT_EQ(l_Sum, m_TestClass.Sum());
}
