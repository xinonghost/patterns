<?php

require_once(__DIR__.'/../interfaces/IButton.php');
require_once(__DIR__.'/../products/MacButton.php');
require_once('AbstractWindow.php');

/**
 * Concrette factory.
 */

class MacWindow extends AbstractWindow
{
	/**
	 * @override
	 */
	protected function createButton(): IButton
	{
		return new MacButton();
	}
}
