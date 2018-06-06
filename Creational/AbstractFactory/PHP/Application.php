<?php

require_once(__DIR__.'/interfaces/IGUIFactory.php');

/**
 * Client code.
 */

class Application
{
	public function __construct(IGUIFactory $factory)
	{
		$this->_factory = $factory;
	}

	public function createUI()
	{
		$button = $this->getFactory()->createButton();
		$checkbox = $this->getFactory()->createCheckbox();

		$this->paint($button, $checkbox);
	}

	private function paint($button, $checkbox)
	{
		$button->setPosition(1, 2);
		$checkbox->setPosition(3, 4);

		$button->paint();
		$checkbox->paint();
		$checkbox->getValue();
	}

	private function getFactory(): IGUIFactory
	{
		return $this->_factory;
	}

	private $_factory = null;
}
