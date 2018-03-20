#pragma once

class A
{
public:
    A();
    virtual void SetValue(int a_Value);
    virtual int GetValue(void);
    virtual ~A();

private:
    int m_Value;
};


