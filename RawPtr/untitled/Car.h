#include <iostream>
#include <memory>

enum class CarType
{
    BrokenCar_t = 0,
    RenaultClio_t,
    None
};

class Car
{
protected:
    int _speed{};
public:
    Car() = default;
    virtual ~Car()
    {
        std::cout << __FUNCTION__ << std::endl;
    }

    virtual void Start() = 0;

    void IncreaseSpeed(const int* value)
    {
        if(value == nullptr)
        {
            _speed = 0;
        }
        else
        {
            _speed += *value;
        }
    }
};
class BrokenCar final : public Car
{
public:
    BrokenCar() = default;
    ~BrokenCar()
    {
        std::cout << __FUNCTION__ << std::endl;
    }
    void Start()
    {
        _speed = 10;
        throw std::logic_error("Flat tired");
    }
};
class RenaultClio : public Car
{
public:
    RenaultClio() = default;
    ~RenaultClio()
    {
        std::cout << __FUNCTION__ << std::endl;
    }
    void Start()
    {
        _speed = 30;
    }
};
