<?php

require_once(__DIR__.'/../interfaces/IGUIFactory.php');
require_once(__DIR__.'/../interfaces/IButton.php');
require_once(__DIR__.'/../interfaces/ICheckbox.php');
require_once(__DIR__.'/../products/MacButton.php');
require_once(__DIR__.'/../products/MacCheckbox.php');

/**
 * Concrette factory.
 */

class MacFactory implements IGUIFactory
{
	/**
	 * @override
	 */
	public function createButton(): IButton
	{
		return new MacButton();
	}

	/**
	 * @override
	 */
	public function createCheckbox(): ICheckbox
	{
		return new MacCheckbox();
	}
}
