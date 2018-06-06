#ifndef IBUTTON_H
#define IBUTTON_H

/**
 * Interface for some object of family.
 */

class IButton
{
	public:
		virtual void paint() = 0;
		virtual void setPosition(const int x, const int y) = 0;
};

#endif
