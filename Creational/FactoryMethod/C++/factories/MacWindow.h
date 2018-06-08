#ifndef MAC_WINDOW_H
#define MAC_WINDOW_H

#include "AbstractWindow.h"
#include "./../interfaces/IButton.h"
#include "./../products/MacButton.h"

/**
 * Concrete factory.
 */

class MacWindow: public AbstractWindow
{
	protected:
		IButton* createButton()
		{
			return new MacButton();
		}
};

#endif
