<?php

require_once(__DIR__.'/builders/Director.php');
require_once(__DIR__.'/builders/CarBuilder.php');
require_once(__DIR__.'/builders/CarManualBuilder.php');

Main::run();

class Main
{
	public static function run()
	{
		$director = new Director();

		$carBuilder = new CarBuilder();
		$director->constructSportCar($carBuilder);
		$car = $carBuilder->getResult();

		$carManualBuilder = new CarManualBuilder();
		$director->constructSportCar($carManualBuilder);
		$carManual = $carManualBuilder->getResult();

		$car->doStuff();
		$carManual->doStuff();
	}
}
