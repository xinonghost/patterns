#ifndef CAR_BUILDER_H
#define CAR_BUILDER_H

#include "./../interfaces/IEngine.h"
#include "./../interfaces/IBuilder.h"
#include "./../products/Car.h"

class CarBuilder: public IBuilder
{
    public:
        void reset();
        void setEngine(IEngine* engine);
        void setSeats(const int seats);
        void setTripComputer(const bool tComputer);
        Car* getResult() {
            return getCar();
        }

    private:
        Car* getCar() {
            return _car;
        }

        Car* _car;
};

#endif
