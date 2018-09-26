#include "StdAfx.h"
#include "Shape.h"
#include "Rect.h"
#include <iostream>

using namespace std;

// constructors
Rect::Rect() :
  Shape()
{
	setWidth(1);
	setHeight(1);
}

Rect::Rect(int newX, int newY, int newWidth, int newHeight) :
  Shape(newX, newY)
{
	setWidth(newWidth);
	setHeight(newHeight);
}

// accessors and mutators for Rect width and height
int  Rect::getWidth()
{
	return width;
}

int  Rect::getHeight()
{
	return height;
}

void Rect::setWidth(int newWidth)
{
	width = newWidth;
}

void Rect::setHeight(int newHeight)
{
	height = newHeight;
}

// display Rect info
void Rect::display()
{
   cout << "Rectangle at (" << getX() << "," << getY() << ")  "
        << "width:  " << getWidth() << "  height: " << getHeight() << endl;
}

// overloaded operations
bool  Rect::operator==(const  Rect& otherRect)  const		// overloaded equality   operator ==
{
	bool	result = false;

	if ((width == otherRect.width) && (height == otherRect.height))
		result = true;
	
	return result;
}

bool  Rect::operator!=(const  Rect& otherRect)  const		// overloaded inequality operator !=
{
	return (width != otherRect.width) || (height != otherRect.height);
}

Rect  Rect::operator*(int	factor)     				// overloaded multiply   operator *
{
	if (factor > 0)
	{
		width  = width * factor;
		height = height * factor;
	}

	return *this;
}

Rect  Rect::operator+(int	increment)					// overloaded addition   operator +
{
	if ((width +  increment) > 0)
		width  = width + increment;
	if ((height + increment) > 0)
		height  = height + increment;

	return *this;
}

