package patterns.creational.factorymethod.products;

import patterns.creational.factorymethod.interfaces.IButton;

/**
 * Concrete product.
 */

public class MacButton implements IButton
{
	/**
	 * @Overrride
	 */
	public void paint()
	{
		System.out.println("Painting button in MacOS style.");
	}

	/**
	 * @Override
	 */
	public void setPosition(final int x, final int y)
	{
		System.out.println("Setting button position to (" + x + ", " + y + ") in MacOS style.");
	}
}
