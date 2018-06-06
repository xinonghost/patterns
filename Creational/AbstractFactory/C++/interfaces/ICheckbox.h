#ifndef ICHECKBOX_H
#define ICHECKBOX_H

/**
 * Interface for some object of family.
 */

class ICheckbox
{
	public:
		virtual void paint() = 0;
		virtual void setPosition(const int x, const int y) = 0;
		virtual bool getValue() = 0;
};

#endif
