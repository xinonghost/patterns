package patterns.creational.abstractfactory.interfaces;

/**
 * Interface for some object of family.
 */

public interface ICheckbox {
	public void paint();
	public void setPosition(final int x, final int y);
	public boolean getValue();
}
