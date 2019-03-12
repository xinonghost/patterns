#include <iostream>
#include "products/Keyboard.h"
#include "products/ExtendedKeyboard.h"

int main()
{
    Keyboard* keyboard = new Keyboard(103);
    Keyboard* keyboardClone = keyboard->clone();

    std::cout << "Keyboard(" << keyboard << "): " << keyboard->getKeyQty() << " keys." << std::endl;
    std::cout << "Keyboard clone(" << keyboardClone << "): " << keyboardClone->getKeyQty() << " keys." << std::endl;

    ExtendedKeyboard* extendedKeyboard = new ExtendedKeyboard(103, 9);
    ExtendedKeyboard* extendedKeyboardClone = extendedKeyboard->clone();

    std::cout << "ExtendedKeyboard(" << extendedKeyboard << "): " << extendedKeyboard->getKeyQty() << " keys and " << extendedKeyboard->getNumPadQty() << " keys numpad" << std::endl;
    std::cout << "ExtendedKeyboard clone(" << extendedKeyboardClone << "): " << extendedKeyboardClone->getKeyQty() << " keys and " << extendedKeyboardClone->getNumPadQty() << " keys numpad" << std::endl;

    return 0;
}
