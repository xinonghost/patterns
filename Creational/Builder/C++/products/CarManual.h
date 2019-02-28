#ifndef CAR_MANUAL_H
#define CAR_MANUAL_H

#include "./../interfaces/IEngine.h"

class CarManual
{
    public:
        void doStuff();
        CarManual* setEngine(IEngine* engine);
        CarManual* setSeats(const int seats);
        CarManual* setTripComputer(const bool tComputer);

    private:
        IEngine* _engine;
        int _seats;
        bool _tripComputer;
};

#endif