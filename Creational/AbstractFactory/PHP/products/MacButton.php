<?php

require_once(__DIR__.'/../interfaces/IButton.php');

/**
 * Concrette object of family.
 */

class MacButton implements IButton
{
	/**
	 * @override
	 */
	public function paint()
	{
		print("Painting button in Mac style.\n");
	}

	/**
	 * @override
	 */
	public function setPosition($x, $y)
	{
		print("Setting button position to ({$x}, {$y}) in Mac style.\n");
	}
}
