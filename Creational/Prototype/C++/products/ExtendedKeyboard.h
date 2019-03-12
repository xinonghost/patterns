#ifndef EXTENDED_KEYBOARD_H
#define EXTENDED_KEYBOARD_H
#include "Keyboard.h"

class ExtendedKeyboard: public Keyboard
{
    public:
        ExtendedKeyboard(const int keyQty, const int newNumPadQty): Keyboard(keyQty)
        {
            numPadQty = newNumPadQty;
        }

        ExtendedKeyboard(ExtendedKeyboard* keyboard): Keyboard(keyboard)
        {
            numPadQty = keyboard->numPadQty;
        }

        int getNumPadQty()
        {
            return numPadQty;
        }

        ExtendedKeyboard* clone()
        {
            return new ExtendedKeyboard(this);
        }

    private:
        int numPadQty;
};

#endif
