<?php

require_once(__DIR__.'/../interfaces/ICheckbox.php');

/**
 * Concrette object of family.
 */

class MacCheckbox implements ICheckbox
{
	/**
	 * @override
	 */
	public function paint()
	{
		print("Painting checkbox in Mac style.\n");
	}

	/**
	 * @override
	 */
	public function setPosition($x, $y)
	{
		print("Setting checkbox position to ({$x}, {$y}) in Mac style.\n");
	}

	/**
	 * @override
	 */
	public function getValue()
	{
		print("Getting checkbox value in Mac style.\n");
		return false;
	}
}
