#include <iostream>
#include "MacCheckbox.h"

/**
 * Concrette object of family (realisation).
 */

void MacCheckbox::paint()
{
	std::cout << "Painting checkbox in Mac style." << std::endl;
}

void MacCheckbox::setPosition(const int x, const int y)
{
	std::cout << "Setting checkbox position to (" << x << ", " << y << ") in Mac style." << std::endl;
}

bool MacCheckbox::getValue()
{
	std::cout << "Getting checkbox value in Mac style." << std::endl;
	return false;
}
