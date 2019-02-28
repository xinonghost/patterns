#ifndef IBUILDER_H
#define IBUILDER_H

#include "IEngine.h"

/**
 * Builder interface.
 */

class IBuilder
{
	public:
		virtual void reset() = 0;
		virtual void setEngine(IEngine* engine) = 0;
		virtual void setSeats(const int seats) = 0;
		virtual void setTripComputer(const bool tComputer) = 0;
};

#endif
