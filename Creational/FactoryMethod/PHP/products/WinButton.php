<?php

require_once(__DIR__.'/../interfaces/IButton.php');

/**
 * Concrette product.
 */

class WinButton implements IButton
{
	/**
	 * @overrride
	 */
	public function paint()
	{
		print("Painting button in Windows style.\n");
	}

	/**
	 * @override
	 */
	public function setPosition($x, $y)
	{
		print("Setting button position to ({$x}, {$y}) in Windows style.\n");
	}
}
