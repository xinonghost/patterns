#ifndef ENGINE_V8_H
#define ENGINE_V8_H

#include "./../interfaces/IEngine.h"

class EngineV8: public IEngine
{
    public:
        EngineV8(const double v): IEngine(v){};
        std::string getType();
        double getVolume();
};

#endif
