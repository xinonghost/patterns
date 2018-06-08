<?php

require_once(__DIR__.'/../interfaces/IButton.php');
require_once(__DIR__.'/../products/WinButton.php');
require_once('AbstractWindow.php');

/**
 * Concrette factory.
 */

class WindowsWindow extends AbstractWindow
{
	/**
	 * @override
	 */
	protected function createButton(): IButton
	{
		return new WinButton();
	}
}
