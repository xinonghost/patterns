#include <iostream>
#include "WinButton.h"

/**
 * Concrette object of family (realisation).
 */

void WinButton::paint()
{
	std::cout << "Painting button in Windows style." << std::endl;
}

void WinButton::setPosition(const int x, const int y)
{
	std::cout << "Setting button position to (" << x << ", " << y << ") in Windows style." << std::endl;
}
