<?php

namespace Creational\Prototype\PHP\products;

require_once('Keyboard.php');

class ExtendedKeyboard extends Keyboard
{
    /**
     * @param int $keyQty
     * @param int $newNumPadQty
     */
    public function __construct(int $keyQty, int $newNumPadQty)
    {
        parent::__construct($keyQty);
        $this->numPadQty = $newNumPadQty;
    }

    /**
     * @return int
     */
    public function getNumPadQty(): int
    {
        return $this->numPadQty;
    }

    /**
     * @return ExtendedKeyboard
     */
    public function clone(): Keyboard
    {
        return new self($this->getKeyQty(), $this->getNumPadQty());
    }

    private $numPadQty;
}
