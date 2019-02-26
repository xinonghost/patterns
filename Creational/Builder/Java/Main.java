package patterns.creational.builder;

import patterns.creational.builder.builders.*;
import patterns.creational.builder.products.*;

public class Main {
    public static void main(String[] args) {
        final Director director = new Director();

        final CarBuilder carBuilder = new CarBuilder();
        director.constructSportCar(carBuilder);
        final Car car = carBuilder.getResult();

        final CarManualBuilder carManualBuilder = new CarManualBuilder();
        director.constructSportCar(carManualBuilder);
        final CarManual carManual = carManualBuilder.getResult();

        car.doStuff();
        carManual.doStuff();
    }
}
