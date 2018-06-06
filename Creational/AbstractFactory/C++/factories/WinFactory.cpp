#include "WinFactory.h"
#include "./../interfaces/IButton.h"
#include "./../interfaces/ICheckbox.h"
#include "./../products/WinButton.h"
#include "./../products/WinCheckbox.h"

/**
 * Concrette factory (realisation).
 */

IButton* WinFactory::createButton()
{
	return new WinButton();
}

ICheckbox* WinFactory::createCheckbox()
{
	return new WinCheckbox();
}
