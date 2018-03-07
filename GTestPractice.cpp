#include <iostream>
#include <gtest\gtest.h>

int main(int a_pArgc, char** a_pArgv)
{
    testing::InitGoogleTest(&a_pArgc, a_pArgv);
    return RUN_ALL_TESTS();
}
