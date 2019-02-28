#include <iostream>
#include "EngineV8.h"

std::string EngineV8::getType()
{
    return "V8";
}

double EngineV8::getVolume()
{
    return _volume;
}
