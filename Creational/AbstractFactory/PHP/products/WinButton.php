<?php

require_once(__DIR__.'/../interfaces/IButton.php');

/**
 * Concrette object of family.
 */

class WinButton implements IButton
{
	/**
	 * @override
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
