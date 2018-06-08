#include <map>
#include <iostream>
#include "./factories/AbstractWindow.h"
#include "./factories/WindowsWindow.h"
#include "./factories/MacWindow.h"

int main()
{
	AbstractWindow* window;
	std::map<std::string, int> config;
	enum {Windows, MacOS};
	config["OS"] = Windows;

	try {
		switch (config["OS"]) {
			case Windows :
				window = new WindowsWindow();
				break;
			case MacOS :
				window = new MacWindow();
				break;
			default :
				throw std::string("Unsupported OS.");
		}

		window->paint();
	} catch (std::string e) {
		std::cerr << e << std::endl;
		return 1;
	}

	return 0;
}
