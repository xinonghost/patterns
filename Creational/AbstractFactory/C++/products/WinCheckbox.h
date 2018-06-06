#ifndef WIN_CHECKBOX_H
#define WIN_CHECKBOX_H

#include "./../interfaces/ICheckbox.h"

/**
 * Concrette object of family.
 */

class WinCheckbox: public ICheckbox
{
	public:
		void paint();
		void setPosition(const int x, const int y);
		bool getValue();
};

#endif
