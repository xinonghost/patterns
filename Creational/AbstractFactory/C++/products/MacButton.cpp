#include <iostream>
#include "MacButton.h"

/**
 * Concrette object of family (realisation).
 */

void MacButton::paint()
{
	std::cout << "Painting button in Mac style." << std::endl;
}

void MacButton::setPosition(const int x, const int y)
{
	std::cout << "Setting button position to (" << x << ", " << y << ") in Mac style." << std::endl;
}
