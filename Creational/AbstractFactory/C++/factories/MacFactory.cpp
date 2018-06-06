#include "MacFactory.h"
#include "./../interfaces/IButton.h"
#include "./../interfaces/ICheckbox.h"
#include "./../products/MacButton.h"
#include "./../products/MacCheckbox.h"

/**
 * Concrette factory (realisation).
 */

IButton* MacFactory::createButton()
{
	return new MacButton();
}

ICheckbox* MacFactory::createCheckbox()
{
	return new MacCheckbox();
}
