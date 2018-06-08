package patterns.creational.factorymethod.factories;

import patterns.creational.factorymethod.interfaces.IButton;
import patterns.creational.factorymethod.products.MacButton;

/**
 * Concrete factory.
 */

public class MacWindow extends AbstractWindow
{
	/**
	 * @Override
	 */
	protected IButton createButton()
	{
		return new MacButton();
	}
}
