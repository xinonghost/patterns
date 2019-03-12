<?php

namespace Creational\Prototype\PHP;

require_once('products/Keyboard.php');
require_once('products/ExtendedKeyboard.php');

use Creational\Prototype\PHP\products\{Keyboard, ExtendedKeyboard};

Main::main();

class Main
{
    public static function main(): void
    {
        $keyboard = new Keyboard(103);
        $keyboardClone = $keyboard->clone();

        print("Keyboard: ".$keyboard->getKeyQty()." keys.\n");
        print("Keyboard clone: ".$keyboardClone->getKeyQty()." keys.\n");

        $extendedKeyboard = new ExtendedKeyboard(103, 9);
        $extendedKeyboardClone = $extendedKeyboard->clone();

        print("ExtendedKeyboard: ".$extendedKeyboard->getKeyQty()." keys and ".$extendedKeyboard->getNumPadQty()." keys numpad.\n");
        print("ExtendedKeyboard clone: ".$extendedKeyboardClone->getKeyQty()." keys and ".$extendedKeyboardClone->getNumPadQty()." keys numpad.\n");
    }
}
