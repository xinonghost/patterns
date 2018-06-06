<?php

require_once('IButton.php');
require_once('ICheckbox.php');

/**
 * Factory interface.
 */

interface IGUIFactory
{
	public function createButton(): IButton;
	public function createCheckbox(): ICheckbox;
}
