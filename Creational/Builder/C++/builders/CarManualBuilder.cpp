#include "CarManualBuilder.h"
#include "./../interfaces/IEngine.h"
#include "./../products/CarManual.h"

void CarManualBuilder::reset()
{
    _carManual = new CarManual();
}

void CarManualBuilder::setEngine(IEngine* engine)
{
    getCarManual()->setEngine(engine);
}

void CarManualBuilder::setSeats(const int seats)
{
    getCarManual()->setSeats(seats);
}

void CarManualBuilder::setTripComputer(const bool tComputer)
{
    getCarManual()->setTripComputer(tComputer);
}
