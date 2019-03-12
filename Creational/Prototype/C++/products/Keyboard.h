#ifndef KEYBOARD_H
#define KEYBOARD_H

class Keyboard
{
    public:
        Keyboard(const int newKeyQty)
        {
            keyQty = newKeyQty;
        }

        Keyboard(Keyboard* keyboard)
        {
            keyQty = keyboard->keyQty;
        }

        int getKeyQty()
        {
            return keyQty;
        }

        Keyboard* clone()
        {
            return new Keyboard(this);
        }

    private:
        int keyQty;
};

#endif
