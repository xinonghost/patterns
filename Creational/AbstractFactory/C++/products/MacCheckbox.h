#ifndef MAC_CHECKBOX_H
#define MAC_CHECKBOX_H

#include "./../interfaces/ICheckbox.h"

/**
 * Concrette object of family.
 */

class MacCheckbox: public ICheckbox
{
	public:
		void paint();
		void setPosition(const int x, const int y);
		bool getValue();
};

#endif
