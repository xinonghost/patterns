package patterns.creational.builder.products;

import patterns.creational.builder.interfaces.IEngine;

public class EngineV8 implements IEngine {
    /**
     * @param volume
     */
    public EngineV8(final float volume) {
        _volume = volume;
    }

    /**
     * @return String
     */
    public String getType() {
        return "V8";
    }

    /**
     * @return float
     */
    public float getVolume() {
        return _volume;
    }

    final private float _volume;
}
