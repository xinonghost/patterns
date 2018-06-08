#include <iostream>
#include "MacButton.h"

/**
 * Concrete product (realisation).
 */

void MacButton::paint()
{
	std::cout << "Painting button in MacOS style." << std::endl;
}

void MacButton::setPosition(const int & x, const int & y)
{
	std::cout << "Setting button position to (" << x << ", " << y << ") in MacOS style." << std::endl;
}
