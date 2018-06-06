package patterns.creational.abstractfactory.factories;

import patterns.creational.abstractfactory.interfaces.*;
import patterns.creational.abstractfactory.products.*;

/**
 * Concrette factory.
 */

public class WinFactory implements IGUIFactory {
	/**
	 * @Override
	 * */
	public IButton createButton()
	{
		return new WinButton();
	}
	
	/**
	 * @Override
	 * */
	public ICheckbox createCheckbox()
	{
		return new WinCheckbox();
	}
}
