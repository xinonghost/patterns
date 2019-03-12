package patterns.Creational.Prototype.Java;

import patterns.Creational.Prototype.Java.products.*;

public class Main
{
    public static void main(String[] args)
    {
        final Keyboard keyboard = new Keyboard(103);
        final Keyboard keyboardClone = keyboard.clone();

        System.out.println("Keyboard(" + keyboard + "): " + keyboard.getKeyQty() + " keys.");
        System.out.println("Keyboard clone(" + keyboardClone + "): " + keyboardClone.getKeyQty() + " keys.");

        final ExtendedKeyboard extendedKeyboard = new ExtendedKeyboard(103, 9);
        final ExtendedKeyboard extendedKeyboardClone = extendedKeyboard.clone();

        System.out.println("ExtendedKeyboard(" + extendedKeyboard + "): " + extendedKeyboard.getKeyQty() + " keys and " + extendedKeyboard.getNumPadQty() + " keys numpad.");
        System.out.println("ExtendedKeyboard clone(" + extendedKeyboardClone + "): " + extendedKeyboardClone.getKeyQty() + " keys and " + extendedKeyboardClone.getNumPadQty() + " keys numpad.");
    }
}
