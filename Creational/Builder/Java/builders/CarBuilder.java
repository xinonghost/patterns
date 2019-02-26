package patterns.creational.builder.builders;

import patterns.creational.builder.interfaces.*;
import patterns.creational.builder.products.Car;

public class CarBuilder implements IBuilder {
    public void reset() {
        _car = new Car();
    }

    /**
     * @param engine
     */
    public void setEngine(final IEngine engine) {
        getCar().setEngine(engine);
    }

    /**
     * @param seats
     */
    public void setSeats(final int seats) {
        getCar().setSeats(seats);
    }

    /**
     * @param tComputer
     */
    public void setTripComputer(final boolean tComputer) {
        getCar().setTripComputer(tComputer);
    }

    /**
     * @return Car
     */
    public Car getResult() {
        return getCar();
    }

    /**
     * @return Car
     */
    private Car getCar() {
        return _car;
    }

    private Car _car;
}
