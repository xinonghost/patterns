#include "CarBuilder.h"
#include "./../interfaces/IEngine.h"
#include "./../products/Car.h"

void CarBuilder::reset()
{
    _car = new Car();
}

void CarBuilder::setEngine(IEngine* engine)
{
    getCar()->setEngine(engine);
}

void CarBuilder::setSeats(const int seats)
{
    getCar()->setSeats(seats);
}

void CarBuilder::setTripComputer(const bool tComputer)
{
    getCar()->setTripComputer(tComputer);
}
