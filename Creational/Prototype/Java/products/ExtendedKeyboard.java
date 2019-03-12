package patterns.Creational.Prototype.Java.products;

public class ExtendedKeyboard extends Keyboard
{
	/**
	 * @param int
	 * @param int
	 */
	public ExtendedKeyboard(final int keyQty, final int newNumPadQty)
	{
		super(keyQty);
		numPadQty = newNumPadQty;
	}

	/**
	 * @param ExtendedKeyboard
	 */
	public ExtendedKeyboard(final ExtendedKeyboard keyboard)
	{
		super(keyboard);
		this.numPadQty = keyboard.getNumPadQty();
	}

	/**
	 * @return int
	 */
	public int getNumPadQty()
	{
		return numPadQty;
	}

	/**
	 * @return Keyboard
	 */
	public ExtendedKeyboard clone()
	{
		return new ExtendedKeyboard(this);
	}

	private final int numPadQty;
}
