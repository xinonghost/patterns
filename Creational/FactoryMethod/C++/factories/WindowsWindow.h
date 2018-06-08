#ifndef WINDOWS_WINDOW_H
#define WINDOWS_WINDOW_H

#include "AbstractWindow.h"
#include "./../interfaces/IButton.h"
#include "./../products/WinButton.h"

/**
 * Concrete factory.
 */

class WindowsWindow: public AbstractWindow
{
	protected:
		IButton* createButton()
		{
			return new WinButton();
		}
};

#endif
