<?php

require_once(__DIR__.'/../interfaces/IEngine.php');

/**
 * Some concrete product.
 */

class Car
{
	public function doStuff()
	{
		print("Car has engine ".$this->_engine->getType()." ".$this->_engine->getVolume().".\n");
		print("Car has {$this->_seats} seats.\n");
		print("Car has trip computer: ".($this->_tripComputer ? 'Yes' : 'No').".\n");
	}

	/**
	 * @param string $engine
	 */
	public function setEngine(IEngine $engine)
	{
		$this->_engine = $engine;
		return $this;
	}

	/**
	 * @param int $seats
	 */
	public function setSeats($seats)
	{
		$this->_seats = $seats;
		return $this;
	}

	/**
	 * @param boolean $tComputer
	 */
	public function setTripComputer($tComputer = true)
	{
		$this->_tripComputer = $tComputer;
		return $this;
	}

	private $_engine;
	private $_seats;
	private $_tripComputer;
}
