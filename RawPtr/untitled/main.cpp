#include "Car.h"
#include <map>

using namespace std;


unique_ptr<Car> CreateCar(const CarType type)
{
    unique_ptr<Car> result{};
    switch(type)
    {
        case CarType::BrokenCar_t:
            result.reset(new BrokenCar());
        break;
        case CarType::RenaultClio_t:
            result.reset(new RenaultClio());
        break;
        default:

        break;
    }
    return result;
}

class CarStock final
{
private:
    std::uint8_t _index{};
    std::map<std::uint8_t, std::unique_ptr<Car>> _container{};
public:
    CarStock()
    {

    }
    uint8_t Push(std::unique_ptr<Car> car)
    {
        _container[_index] = move(car);
        return _index++;
    }
    std::unique_ptr<Car> Get(const int pos)
    {
        std::unique_ptr<Car> result{};
        if(_container.find(pos) != _container.end())
        {
            result = move(_container.at(pos));
        }
        return result;
    }
    bool Remove(const int pos)
    {
        if(_container.find(pos) != _container.end())
        {
            _container.erase(pos);
        }
    }
    ~CarStock() = default;

};

int main()
{
    std::unique_ptr<Car> clio1 = CreateCar(CarType::RenaultClio_t);
    std::unique_ptr<Car> clio2 = CreateCar(CarType::RenaultClio_t);
    {
        CarStock stock;

        stock.Push(move(clio1));
        stock.Push(move(clio2));
        auto lastPos = stock.Push(CreateCar(CarType::RenaultClio_t));
        std::unique_ptr<Car> lastCar = stock.Get(lastPos);
        lastCar->Start();
    }

    return 0;
}
