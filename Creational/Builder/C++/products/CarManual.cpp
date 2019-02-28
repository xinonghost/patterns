#include <iostream>
#include "CarManual.h"
#include "./../interfaces/IEngine.h"

void CarManual::doStuff()
{
    std::cout << "Car manual has engine " << _engine->getType() << " "
        << _engine->getVolume() << std::endl;
    std::cout << "Car manual has " << _seats << " seats" << std::endl;
    std::cout << "Car manual has trip computer: " << (_tripComputer ? "Yes" : "NO") << std::endl;
}

CarManual* CarManual::setEngine(IEngine* engine)
{
    _engine = engine;
    return this;
}

CarManual* CarManual::setSeats(const int seats)
{
    _seats = seats;
    return this;
}

CarManual* CarManual::setTripComputer(const bool tComputer)
{
    _tripComputer = tComputer;
    return this;
}
