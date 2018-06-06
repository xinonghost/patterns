package patterns.creational.abstractfactory.products;

import patterns.creational.abstractfactory.interfaces.IButton;

/**
 * Concrette object of family.
 */

public class WinButton implements IButton
{
	/**
	 * @Override
	 * */
	public void paint()
	{
		System.out.println("Painting button in Windows style.");
	}
	
	/**
	 * @Override
	 * */
	public void setPosition(final int x, final int y)
	{
		System.out.println("Setting button position to (" + x + ", " + y + ") in Windows style.");
	}
}
