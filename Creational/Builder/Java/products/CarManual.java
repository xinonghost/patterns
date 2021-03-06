package patterns.creational.builder.products;

import patterns.creational.builder.interfaces.IEngine;

public class CarManual {
    public void doStuff() {
        System.out.println(
                "Car manual has engine " + _engine.getType() + " " + _engine.getVolume()
        );
        System.out.println("Car manual has " + _seats + " seats");
        System.out.println("Car manual has trip computer: " + (_tripComputer ? "Yes" : "No"));
    }

    /**
     * @param engine
     * @return Car
     */
    public CarManual setEngine(final IEngine engine) {
        _engine = engine;
        return this;
    }

    /**
     * @param seats
     * @return Car
     */
    public CarManual setSeats(final float seats) {
        _seats = seats;
        return this;
    }

    /**
     * @param tComputer
     * @return Car
     */
    public CarManual setTripComputer(final boolean tComputer) {
        _tripComputer = tComputer;
        return this;
    }

    private IEngine _engine;
    private float _seats;
    private boolean _tripComputer;
}
