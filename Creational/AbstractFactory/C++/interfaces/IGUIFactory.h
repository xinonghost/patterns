#ifndef IGUIFACTORY_H
#define IGUIFACTORY_H

#include "./IButton.h"
#include "./ICheckbox.h"

/**
 * Factory interface.
 */

class IGUIFactory
{
	public:
		virtual IButton* createButton() = 0;
		virtual ICheckbox* createCheckbox() = 0;
};

#endif
