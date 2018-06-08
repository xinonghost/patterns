#ifndef ABSTRACT_WINDOW_H
#define ABSTRACT_WINDOW_H

#include <iostream>
#include "./../interfaces/IButton.h"

/**
 * Abstract factory.
 */

class AbstractWindow
{
	public:
		void paint()
		{
			std::cout << "Painting window." << std::endl;

			IButton* button = createButton();
			button->setPosition(1, 2);
			button->paint();

			delete button;
		}

	protected:
		virtual IButton* createButton() = 0;
};

#endif
