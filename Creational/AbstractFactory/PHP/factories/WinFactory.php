<?php

require_once(__DIR__.'/../interfaces/IGUIFactory.php');
require_once(__DIR__.'/../interfaces/IButton.php');
require_once(__DIR__.'/../interfaces/ICheckbox.php');
require_once(__DIR__.'/../products/WinButton.php');
require_once(__DIR__.'/../products/WinCheckbox.php');

/**
 * Concrette factory.
 */

class WinFactory implements IGUIFactory
{
	/**
	 * @override
	 */
	public function createButton(): IButton
	{
		return new WinButton();
	}

	/**
	 * @override
	 */
	public function createCheckbox(): ICheckbox
	{
		return new WinCheckbox();
	}
}
