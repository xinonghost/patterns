<?php

require_once(__DIR__.'/../interfaces/IButton.php');

/**
 * Concrette product.
 */

class MacButton implements IButton
{
	/**
	 * @overrride
	 */
	public function paint()
	{
		print("Painting button in MacOS style.\n");
	}

	/**
	 * @override
	 */
	public function setPosition($x, $y)
	{
		print("Setting button position to ({$x}, {$y}) in MacOS style.\n");
	}
}
