#ifndef APPLICATION_H
#define APPLICATION_H

#include "./interfaces/IGUIFactory.h"
#include "./interfaces/IButton.h"
#include "./interfaces/ICheckbox.h"

/**
 * Client code.
 */

class Application
{
	public:
		Application(IGUIFactory* factory): factory_(factory) {}

		void createUI()
		{
			IButton* button = getFactory()->createButton();
			ICheckbox* checkbox = getFactory()->createCheckbox();

			paint(button, checkbox);
		}

	private:
		void paint(IButton* button, ICheckbox* checkbox)
		{
			button->setPosition(1, 2);
			checkbox->setPosition(3, 4);

			button->paint();
			checkbox->paint();

			checkbox->getValue();

			delete checkbox;
			delete button;
		}

		IGUIFactory* getFactory() { return factory_; }
		
		IGUIFactory* factory_;
};

#endif
