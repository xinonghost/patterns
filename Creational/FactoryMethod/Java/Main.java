package patterns.creational.factorymethod;

import java.util.HashMap;
import patterns.creational.factorymethod.factories.*;

public class Main
{
	public static void main(String[] args)
	{
		HashMap<String, String> config = new HashMap<>();
		config.put("OS", "Windows");
		// config.put("OS", "MacOS");
		
		AbstractWindow window = null;
		
		try {
			switch (config.get("OS")) {
				case "Windows" :
					window = new WindowsWindow();
					break;
				case "MacOS" :
					window = new MacWindow();
					break;
				default:
					throw new Exception("Unsupported OS.");
			}
			
			window.paint();
		} catch (final Exception e) {
			e.printStackTrace();
		}
	}
}
