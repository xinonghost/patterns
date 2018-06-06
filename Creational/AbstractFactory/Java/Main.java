package patterns.creational.abstractfactory;

import java.util.HashMap;
import patterns.creational.abstractfactory.interfaces.IGUIFactory;
import patterns.creational.abstractfactory.factories.*;

public class Main {
	public static void main(String[] args)
	{
		HashMap<String, String> config = new HashMap<>();
		// config.put("OS", "Windows");
		config.put("OS", "MacOS");
		
		IGUIFactory factory;
		
		try {
			switch (config.get("OS")) {
				case "Windows" :
					factory = new WinFactory();
					break;
				case "MacOS" :
					factory = new MacFactory();
					break;
				default:
					throw new Exception("Unsupported OS.");
			}
			
			Application app = new Application(factory);
			app.createUI();
		} catch (final Exception e) {
			e.printStackTrace();
		}
	}
}
