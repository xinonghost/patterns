#ifndef WIN_FACTORY_H
#define WIN_FACTORY_H

#include "./../interfaces/IGUIFactory.h"
#include "./../interfaces/IButton.h"
#include "./../interfaces/ICheckbox.h"

/**
 * Concrette factory.
 */

class WinFactory: public IGUIFactory
{
	public:
		IButton* createButton();
		ICheckbox* createCheckbox();
};

#endif
