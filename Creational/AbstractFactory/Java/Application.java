package patterns.creational.abstractfactory;

import patterns.creational.abstractfactory.interfaces.*;

/**
 * Client code.
 */

public class Application
{
	public Application(final IGUIFactory factory)
	{
		factory_ = factory;
	}
	
	public void createUI()
	{
		IButton button = this.getFactory().createButton();
		ICheckbox checkbox = this.getFactory().createCheckbox();
		
		this.paint(button, checkbox);
	}
	
	private void paint(final IButton button, final ICheckbox checkbox)
	{
		button.setPosition(1, 2);
		checkbox.setPosition(3, 4);
		
		button.paint();
		checkbox.paint();
		
		checkbox.getValue();
	}
	
	private IGUIFactory getFactory()
	{
		return factory_;
	}
	
	private final IGUIFactory factory_;
}
