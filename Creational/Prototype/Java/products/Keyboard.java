package patterns.Creational.Prototype.Java.products;

public class Keyboard
{
	/**
	 * @param int
	 */
	public Keyboard(final int newKeyQty)
	{
		keyQty = newKeyQty;
	}

	/**
	 * @param Keyboard
	 */
	public Keyboard(final Keyboard keyboard)
	{
		this.keyQty = keyboard.getKeyQty();
	}

	/**
	 * @return int
	 */
	public int getKeyQty()
	{
		return keyQty;
	}

	/**
	 * @return Keyboard
	 */
	public Keyboard clone()
	{
		return new Keyboard(this);
	}

	private final int keyQty;
}
