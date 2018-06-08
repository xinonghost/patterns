package patterns.creational.factorymethod.factories;

import patterns.creational.factorymethod.interfaces.IButton;
import patterns.creational.factorymethod.products.WinButton;

/**
 * Concrete factory.
 */

public class WindowsWindow extends AbstractWindow
{
	/**
	 * @Override
	 */
	protected IButton createButton()
	{
		return new WinButton();
	}
}
