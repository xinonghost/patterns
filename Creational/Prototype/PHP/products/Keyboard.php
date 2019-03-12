<?php

namespace Creational\Prototype\PHP\products;

class Keyboard
{
    /**
     * @param int $newKeyQty
     */
    public function __construct(int $newKeyQty)
    {
        $this->keyQty = $newKeyQty;
    }

    /**
     * @return int
     */
    public function getKeyQty(): int
    {
        return $this->keyQty;
    }

    /**
     * @return Keyboard
     */
    public function clone(): Keyboard
    {
        return new self($this->getKeyQty());
    }

    private $keyQty;
}
