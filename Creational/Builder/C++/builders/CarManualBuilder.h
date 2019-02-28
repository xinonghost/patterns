#ifndef CAR_MANUAL_BUILDER_H
#define CAR_MANUAL_BUILDER_H

#include "./../interfaces/IEngine.h"
#include "./../interfaces/IBuilder.h"
#include "./../products/CarManual.h"

class CarManualBuilder: public IBuilder
{
    public:
        void reset();
        void setEngine(IEngine* engine);
        void setSeats(const int seats);
        void setTripComputer(const bool tComputer);
        CarManual* getResult() {
            return getCarManual();
        }

    private:
        CarManual* getCarManual() {
            return _carManual;
        }

        CarManual* _carManual;
};

#endif
