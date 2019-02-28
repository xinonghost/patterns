#ifndef CAR_H
#define CAR_H

#include "./../interfaces/IEngine.h"

class Car
{
	public:
		void doStuff();
		Car* setEngine(IEngine* engine);
		Car* setSeats(const int seats);
		Car* setTripComputer(const bool tComputer);

	private:
		IEngine* _engine;
		int _seats;
		bool _tripComputer;
};

#endif