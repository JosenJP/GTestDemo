#pragma once

class ClassTest
{
    public:
        ClassTest();
        ~ClassTest();

        short Sum(short a_Value1, short a_Value2);
        short Sum();

        void SetValues(short a_Value1, short a_Value2);

    private:
        short m_Value1;
        short m_Value2;
        void Init();
};
