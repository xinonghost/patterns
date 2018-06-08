<?php

require_once(__DIR__.'/factories/WindowsWindow.php');
require_once(__DIR__.'/factories/MacWindow.php');

Main::run();

class Main
{
	public static function run()
	{
		$config = [
			'OS' => 'Windows'
			// 'OS' => 'MacOS'
		];

		$window = null;

		try {
			switch ($config['OS']) {
				case 'Windows' :
					$window = new WindowsWindow();
					break;
				case 'MacOS' :
					$window = new MacWindow();
					break;
				default :
					throw new Exception('Unsupported OS.');
			}

			$window->paint();
		} catch (Exception $e) {
			die($e->getMessage());
		}
	}
}
