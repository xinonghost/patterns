package patterns.creational.factorymethod.products;

import patterns.creational.factorymethod.interfaces.IButton;

/**
 * Concrete product.
 */

public class WinButton implements IButton
{
	/**
	 * @Overrride
	 */
	public void paint()
	{
		System.out.println("Painting button in Windows style.");
	}

	/**
	 * @Override
	 */
	public void setPosition(final int x, final int y)
	{
		System.out.println("Setting button position to (" + x + ", " + y + ") in Windows style.");
	}
}
