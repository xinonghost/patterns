#ifndef MAC_FACTORY_H
#define MAC_FACTORY_H

#include "./../interfaces/IGUIFactory.h"
#include "./../interfaces/IButton.h"
#include "./../interfaces/ICheckbox.h"

/**
 * Concrette factory.
 */

class MacFactory: public IGUIFactory
{
	public:
		IButton* createButton();
		ICheckbox* createCheckbox();
};

#endif
