package patterns.creational.builder.interfaces;

/**
 * Builder interface.
 */

public interface IBuilder {
    void reset();

    /**
     * @param engine
     */
    void setEngine(IEngine engine);

    /**
     * @param seats
     */
    void setSeats(int seats);

    /**
     * @param tComputer
     */
    void setTripComputer(boolean tComputer);
}
