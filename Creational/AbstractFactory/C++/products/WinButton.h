#ifndef WIN_BUTTON_H
#define WIN_BUTTON_H

#include "./../interfaces/IButton.h"

/**
 * Concrette object of family.
 */

class WinButton: public IButton
{
	public:
		void paint();
		void setPosition(const int x, const int y);
};

#endif
