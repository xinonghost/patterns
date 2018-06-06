#include <map>
#include <iostream>
#include "./interfaces/IGUIFactory.h"
#include "./factories/WinFactory.h"
#include "./factories/MacFactory.h"
#include "./Application.h"

int main()
{
	IGUIFactory* factory;
	std::map<std::string, int> config;
	enum {Windows, MacOS};
	config["OS"] = MacOS;

	try {
		switch (config["OS"]) {
			case Windows :
				factory = new WinFactory();
				break;
			case MacOS :
				factory = new MacFactory();
				break;
			default :
				throw std::string("Unsupported OS.");
		}

		Application app = Application(factory);
		app.createUI();
	} catch (std::string e) {
		std::cerr << e << std::endl;
		return 1;
	}

	return 0;
}
