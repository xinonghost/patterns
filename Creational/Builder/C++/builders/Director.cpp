#include "Director.h"
#include "./../interfaces/IBuilder.h"
#include "./../products/EngineV8.h"

void Director::constructSportCar(IBuilder* builder)
{
    builder->reset();
    builder->setEngine(new EngineV8(4.2));
    builder->setSeats(2);
    builder->setTripComputer(false);
}
