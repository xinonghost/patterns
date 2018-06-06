package patterns.creational.abstractfactory.interfaces;

/**
 * Factory interface.
 */

public interface IGUIFactory {
	public IButton createButton();
	public ICheckbox createCheckbox();
}
