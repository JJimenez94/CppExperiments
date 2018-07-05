#include <iostream>

using namespace std;

int _globalVar;
// c++11

struct Info
{
    int A{};
    int B{};
};
int ModifyStructMember(void)
{
    int* a{};
    {
        Info info{};
        a = &info.A;
        for(int i = 0 ; i < 100 ; ++i)
        {
            *a = *a + 1; // (*a)++
        }

        std::cout << "*a " << *a << std::endl;
        std::cout << "info.A " << info.A << std::endl;
    }
    //! Mucho código
    std::cout << "*a " << *a << std::endl;
    return _globalVar;
}
void InitializerPtr()
{
    int* ptr{};
    int ptr2{};
}
int fncfnc(void)
{
    return ModifyStructMember();
}
int CallbackRunner(int(*callback)(void) ){
    return callback();
}
void RunClase1()
{
    fncfnc();
    InitializerPtr();
    auto value = CallbackRunner(ModifyStructMember);
}
