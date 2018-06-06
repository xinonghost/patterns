package patterns.creational.abstractfactory.products;

import patterns.creational.abstractfactory.interfaces.ICheckbox;

/**
 * Concrette object of family.
 */

public class MacCheckbox implements ICheckbox
{
	/**
	 * @Override
	 * */
	public void paint()
	{
		System.out.println("Painting checkbox in Mac style.");
	}
	
	/**
	 * @Override
	 * */
	public void setPosition(final int x, final int y)
	{
		System.out.println("Setting checkbox position to (" + x + ", " + y + ") in Mac style.");
	}
	
	/**
	 * @Override
	 * */
	public boolean getValue()
	{
		System.out.println("Getting checkbox value in Mac style.");
		return false;
	}
}
