#ifndef MAC_BUTTON_H
#define MAC_BUTTON_H

#include "./../interfaces/IButton.h"

/**
 * Concrete product.
 */

class MacButton: public IButton
{
	public:
		void paint();
		void setPosition(const int & x, const int & y);
};

#endif
