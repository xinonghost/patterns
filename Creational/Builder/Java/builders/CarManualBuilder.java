package patterns.creational.builder.builders;

import patterns.creational.builder.interfaces.*;
import patterns.creational.builder.products.CarManual;

public class CarManualBuilder implements IBuilder {
    public void reset() {
        _manual = new CarManual();
    }

    /**
     * @param engine
     */
    public void setEngine(final IEngine engine) {
        getCarManual().setEngine(engine);
    }

    /**
     * @param seats
     */
    public void setSeats(final int seats) {
        getCarManual().setSeats(seats);
    }

    /**
     * @param tComputer
     */
    public void setTripComputer(final boolean tComputer) {
        getCarManual().setTripComputer(tComputer);
    }

    /**
     * @return Car
     */
    public CarManual getResult() {
        return getCarManual();
    }

    /**
     * @return Car
     */
    private CarManual getCarManual() {
        return _manual;
    }

    private CarManual _manual;
}
