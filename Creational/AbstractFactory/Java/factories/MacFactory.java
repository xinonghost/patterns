package patterns.creational.abstractfactory.factories;

import patterns.creational.abstractfactory.interfaces.*;
import patterns.creational.abstractfactory.products.*;

/**
 * Concrette factory.
 */

public class MacFactory implements IGUIFactory {
	/**
	 * @Override
	 * */
	public IButton createButton()
	{
		return new MacButton();
	}
	
	/**
	 * @Override
	 * */
	public ICheckbox createCheckbox()
	{
		return new MacCheckbox();
	}
}
