package patterns.creational.factorymethod.factories;

import patterns.creational.factorymethod.interfaces.IButton;

/**
 * Abstract factory.
 */

public abstract class AbstractWindow
{
	public void paint()
	{
		System.out.println("Painting window.");

		IButton button = this.createButton();

		button.setPosition(1, 2);
		button.paint();
	}
	
	protected abstract IButton createButton();
}
