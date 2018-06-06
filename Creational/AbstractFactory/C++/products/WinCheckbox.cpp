#include <iostream>
#include "WinCheckbox.h"

/**
 * Concrette object of family (realisation).
 */

void WinCheckbox::paint()
{
	std::cout << "Painting checkbox in Windows style." << std::endl;
}

void WinCheckbox::setPosition(const int x, const int y)
{
	std::cout << "Setting checkbox position to (" << x << ", " << y << ") in Windows style." << std::endl;
}

bool WinCheckbox::getValue()
{
	std::cout << "Getting checkbox value in Windows style." << std::endl;
	return false;
}
