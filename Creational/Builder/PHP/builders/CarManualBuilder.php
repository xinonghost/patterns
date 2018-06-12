<?php

require_once(__DIR__.'/../interfaces/IBuilder.php');
require_once(__DIR__.'/../interfaces/IEngine.php');
require_once(__DIR__.'/../products/CarManual.php');

/**
 * Builder for concrete product.
 */

class CarManualBuilder implements IBuilder
{
	public function reset()
	{
		$this->_manual = new CarManual();
	}

	/**
	 * @param string $engine
	 */
	public function setEngine(IEngine $engine)
	{
		$this->getCarManual()->setEngine($engine);
	}

	/**
	 * @param int $seats
	 */
	public function setSeats($seats)
	{
		$this->getCarManual()->setSeats($seats);
	}

	/**
	 * @param boolean $tComputer
	 */
	public function setTripComputer($tComputer = true)
	{
		$this->getCarManual()->setTripComputer($tComputer);
	}

	public function getResult(): CarManual
	{
		return $this->getCarManual();
	}

	private function getCarManual(): CarManual
	{
		return $this->_manual;
	}

	private $_manual;
}
