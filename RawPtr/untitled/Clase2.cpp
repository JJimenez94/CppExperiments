#include "Car.h"
#include <memory>

/*
 * RAII
*/
using namespace std;
void Inc(const int& ref,int * b)
{
    if(b != nullptr)
    {
        // LOG ERROR
        // throw
        //return error_code;
    }

    //ref++;
}
void ptr1()
{
    uint8_t buffer[512]; // new/c++98, malloc/c, make_shared/c++11 make_unique/c++14
    uint8_t* pbuffer = buffer;

    for(int i = 0; i < 512; ++i)
    {
        printf(" %2X ", pbuffer[i]);
    }
}

void fnc()
{

    //!!!
    //!
    //!

    throw logic_error("puff");

    //!
    //!
}
void func(const Car* car)
{

}
void ptr2()
{
    unique_ptr<Car> car2{};
    unique_ptr<Car> car1{};
    RenaultClio car3;
    car1.reset(new BrokenCar());
    car2 = make_unique<RenaultClio>();
    //func(car1->get());
    car1->Start(); // puff
    car2->Start();
}
void ptr3()
{
    Car* car2{nullptr};
    Car* car1{nullptr};
    try
    {
        car1 = new BrokenCar();
        car1->Start(); // puff
        car2 = new RenaultClio();
        car2->Start();
        RenaultClio car3;
    }
    catch(std::exception& ex)
    {
        if(car1 != nullptr)
        {
            delete car1;
        }

        if(car2 != nullptr)
        {
            delete car2;
        }
        cout << " ERROR " << ex.what() << endl;
    }
}

void RunCase2()
{
    try
    {
        ptr2();
    }
    catch(std::exception& ex)
    {
        cout << " ERROR " << ex.what() << endl;
    }
}
