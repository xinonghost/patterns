<?php

require_once(__DIR__.'/../interfaces/ICheckbox.php');

/**
 * Concrette object of family.
 */

class WinCheckbox implements ICheckbox
{
	/**
	 * @override
	 */
	public function paint()
	{
		print("Painting checkbox in Windows style.\n");
	}

	/**
	 * @override
	 */
	public function setPosition($x, $y)
	{
		print("Setting checkbox position to ({$x}, {$y}) in Windows style.\n");
	}

	/**
	 * @override
	 */
	public function getValue()
	{
		print("Getting checkbox value in Windows style.\n");
		return false;
	}
}
