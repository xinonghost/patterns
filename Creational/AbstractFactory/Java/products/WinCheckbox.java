package patterns.creational.abstractfactory.products;

import patterns.creational.abstractfactory.interfaces.ICheckbox;

/**
 * Concrette object of family.
 */

public class WinCheckbox implements ICheckbox
{
	/**
	 * @Override
	 * */
	public void paint()
	{
		System.out.println("Painting checkbox in Windows style.");
	}
	
	/**
	 * @Override
	 * */
	public void setPosition(final int x, final int y)
	{
		System.out.println("Setting checkbox position to (" + x + ", " + y + ") in Windows style.");
	}
	
	/**
	 * @Override
	 * */
	public boolean getValue()
	{
		System.out.println("Getting checkbox value in Windows style.");
		return false;
	}
}
