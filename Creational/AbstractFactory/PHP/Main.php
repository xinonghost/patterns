<?php

require_once(__DIR__.'/factories/WinFactory.php');
require_once(__DIR__.'/factories/MacFactory.php');
require_once(__DIR__.'/Application.php');

Main::run();

class Main
{
	public static function run()
	{
		$config = [
			// 'OS' => 'Windows'
			'OS' => 'MacOS'
		];

		$factory = null;

		try {
			switch ($config['OS']) {
				case 'Windows' :
					$factory = new WinFactory();
					break;
				case 'MacOS' :
					$factory = new MacFactory();
					break;
				default :
					throw new Exception('Unsupported OS.');
			}

			$app = new Application($factory);
			$app->createUI();
		} catch (Exception $e) {
			die($e->getMessage());
		}
	}
}
