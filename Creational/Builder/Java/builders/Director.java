package patterns.creational.builder.builders;

import patterns.creational.builder.interfaces.IBuilder;
import patterns.creational.builder.products.EngineV8;

/**
 * Director builder.
 */

public class Director {
    public void constructSportCar(final IBuilder builder) {
        builder.reset();
        builder.setEngine(new EngineV8(4.2f));
        builder.setSeats(2);
        builder.setTripComputer(false);
    }
}
