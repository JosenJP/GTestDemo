#pragma once
#include "ClassA.h"
#include <gmock\gmock.h>

class MockA : public A
{
public:
    MOCK_METHOD1(SetValue, void(int));
    MOCK_METHOD0(GetValue, int(void));

private:

};
