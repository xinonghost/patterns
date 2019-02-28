#include <iostream>
#include "Car.h"

void Car::doStuff()
{
    std::cout << "Car has engine " << _engine->getType() << " "
        << _engine->getVolume() << std::endl;
    std::cout << "Car has " << _seats << " seats" << std::endl;
    std::cout << "Car has trip computer: " << (_tripComputer ? "Yes" : "NO") << std::endl;
}

Car* Car::setEngine(IEngine* engine)
{
    _engine = engine;
    return this;
}

Car* Car::setSeats(const int seats)
{
    _seats = seats;
    return this;
}

Car* Car::setTripComputer(const bool tComputer)
{
    _tripComputer = tComputer;
    return this;
}
