<?php

require_once('IEngine.php');

/**
 * Builder interface.
 */

interface IBuilder
{
	public function reset();

	/**
	 * @param string $engine
	 */
	public function setEngine(IEngine $engine);

	/**
	 * @param int $seats
	 */
	public function setSeats($seats);

	/**
	 * @param boolean $tComputer
	 */
	public function setTripComputer($tComputer);
}
