#include "./builders/Director.h"
#include "./builders/CarBuilder.h"
#include "./builders/CarManualBuilder.h"
#include "./products/Car.h"
#include "./products/CarManual.h"

int main()
{
    Director* director = new Director();

    CarBuilder* carBuilder = new CarBuilder();
    director->constructSportCar(carBuilder);
    Car* car = carBuilder->getResult();

    CarManualBuilder* carManualBuilder = new CarManualBuilder();
    director->constructSportCar(carManualBuilder);
    CarManual* carManual = carManualBuilder->getResult();

    car->doStuff();
    carManual->doStuff();

    return 0;
}
