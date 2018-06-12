<?php

require_once(__DIR__.'/../interfaces/IBuilder.php');
require_once(__DIR__.'/../products/EngineV8.php');

/**
 * Director builder.
 */

class Director
{
	public function constructSportCar(IBuilder &$builder)
	{
		$builder->reset();
		$builder->setEngine(new EngineV8(4.2));
		$builder->setSeats(2);
		$builder->setTripComputer(false);
	}
}
