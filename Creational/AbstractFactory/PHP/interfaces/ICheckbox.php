<?php

/**
 * Interface for some object of family.
 */

interface ICheckbox
{
	public function paint();
	public function setPosition($x, $y);
	public function getValue();
}
