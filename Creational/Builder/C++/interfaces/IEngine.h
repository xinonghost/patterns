#ifndef IENGINE_H
#define IENGINE_H

#include <string>

class IEngine
{
	public:
        IEngine(const double v) {
            _volume = v;
        }

        virtual std::string getType() = 0;
        virtual double getVolume() = 0;

    protected:
        double _volume;
};

#endif
