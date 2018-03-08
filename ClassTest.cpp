#include "ClassTest.h"

ClassTest::ClassTest()
{
    Init();
}

ClassTest::~ClassTest()
{
}

void ClassTest::Init()
{
    m_Value1 = 1;
    m_Value2 = 2;
}

void ClassTest::SetValues(short a_Value1, short a_Value2)
{
    m_Value1 = a_Value1;
    m_Value2 = a_Value2;
}

short ClassTest::Sum()
{
    return m_Value1 + m_Value2;
}

short ClassTest::Sum(short a_Value1, short a_Value2)
{
    return a_Value1 + a_Value2;
}
