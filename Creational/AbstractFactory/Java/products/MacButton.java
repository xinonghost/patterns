package patterns.creational.abstractfactory.products;

import patterns.creational.abstractfactory.interfaces.IButton;

/**
 * Concrette object of family.
 */

public class MacButton implements IButton
{
	/**
	 * @Override
	 * */
	public void paint()
	{
		System.out.println("Painting button in Mac style.");
	}
	
	/**
	 * @Override
	 * */
	public void setPosition(final int x, final int y)
	{
		System.out.println("Setting button position to (" + x + ", " + y + ") in Mac style.");
	}
}
