<?php

require_once(__DIR__.'/../interfaces/IButton.php');

/**
 * Abstract factory.
 */

abstract class AbstractWindow
{
	public function paint()
	{
		print("Painting window.\n");

		$button = $this->createButton();

		$button->setPosition(1, 2);
		$button->paint();
	}

	protected abstract function createButton(): IButton;
}
