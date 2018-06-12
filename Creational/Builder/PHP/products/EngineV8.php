<?php

require_once(__DIR__.'/../interfaces/IEngine.php');

/**
 * Concrete component.
 */

class EngineV8 implements IEngine
{
	public function __construct($volume = 4.0)
	{
		$this->_volume = $volume;
	}

	public function getType()
	{
		return 'V8';
	}

	public function getVolume()
	{
		return $this->_volume;
	}

	private $_volume;
}
