#include "Clase1.h"
#include <iostream>
#include <memory>

using namespace std;

/*
 * RAII
*/
class Car
{
protected:
    int _speed{};
public:
    Car() = default;
    virtual ~Car()
    {
        cout << __FUNCTION__ << endl;
    }

    virtual void Start() = 0;
};
class FordFiesta final : public Car
{
public:
    FordFiesta() = default;
    ~FordFiesta()
    {
        cout << __FUNCTION__ << endl;
    }
    void Start()
    {
        _speed = 10;
        throw logic_error("Flat tired");
    }
};
class RenaultClio : public Car
{
public:
    RenaultClio() = default;
    ~RenaultClio()
    {
        cout << __FUNCTION__ << endl;
    }
    void Start()
    {
        _speed = 30;
    }
};
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
    car1.reset(new FordFiesta());
    car2 = make_unique<RenaultClio>();
    func(car1->get());
    car1->Start(); // puff
    car2->Start();
}
void ptr3()
{
    Car* car2{nullptr};
    Car* car1{nullptr};
    try
    {
        car1 = new FordFiesta();
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
int main()
{
    try
    {
        ptr2();
    }
    catch(std::exception& ex)
    {
        cout << " ERROR " << ex.what() << endl;
    }
    RunClase1();
    return 0;
}
