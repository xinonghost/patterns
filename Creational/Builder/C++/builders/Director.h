#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "./../interfaces/IBuilder.h"

class Director
{
    public:
        void constructSportCar(IBuilder* builder);
};

#endif
