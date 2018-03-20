#include "ClassA.h"

A::A()
{
    m_Value = 0;
}

A::~A()
{
    
}

void A::SetValue(int a_Value)
{
    m_Value = a_Value;
}

int A::GetValue()
{
    return m_Value;
}
