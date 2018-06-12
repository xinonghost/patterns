<?php

require_once(__DIR__.'/../interfaces/IBuilder.php');
require_once(__DIR__.'/../interfaces/IEngine.php');
require_once(__DIR__.'/../products/Car.php');

/**
 * Builder for concrete product.
 */

class CarBuilder implements IBuilder
{
	public function reset()
	{
		$this->_car = new Car();
	}

	/**
	 * @param string $engine
	 */
	public function setEngine(IEngine $engine)
	{
		$this->getCar()->setEngine($engine);
	}

	/**
	 * @param int $seats
	 */
	public function setSeats($seats)
	{
		$this->getCar()->setSeats($seats);
	}

	/**
	 * @param boolean $tComputer
	 */
	public function setTripComputer($tComputer = true)
	{
		$this->getCar()->setTripComputer($tComputer);
	}

	public function getResult(): Car
	{
		return $this->getCar();
	}

	private function getCar(): Car
	{
		return $this->_car;
	}

	private $_car;
}
