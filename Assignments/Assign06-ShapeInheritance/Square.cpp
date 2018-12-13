#include "StdAfx.h"
#include "Square.h"
#include <iostream>

using namespace std;

// constructors
Square::Square() :
  Rect()
{
	setSide(1);
}

Square::Square(int newX, int newY, int length) :
  Rect(newX, newY, length, length)					// inheritance from Rect class
{
	setSide(length);
}

// accessors and mutators for Square side
int		Square::getSide()
{
	return side;
}

void	Square::setSide(int newLength)
{
	side = newLength;
	Rect::setWidth(newLength);
	Rect::setHeight(newLength);
}

void	Square::display()
{
	cout << fixed << setprecision(3);
	cout << "Square   : (" << setw(2) << getX() << ',' << setw(2) << getY() << ')'
		<< "      length of side: " << right << setw(2) << getSide()
		<< "   area: " << right << setw(7) << getArea()
		<< "   perimeter: " << right << setw(7) << getPerimeter() << endl;
}

// overloaded operators
bool	Square::operator==(const  Square& otherSquare)  const		// overloaded equality   operator ==
{
	bool	result = false;

	if (side == otherSquare.side)
		result = true;

	return result;
}

bool	Square::operator!=(const  Square& otherSquare)  const		// overloaded inequality operator !=
{
	return (side != otherSquare.side);
}

Square	Square::operator*(int	factor)				// overloaded multiply   operator *
{
	if (factor > 0)
		side = side * factor;

	return *this;
}

Square	Square::operator+(int	increment)			// overloaded addition   operator +
{
	if ((side + increment) > 0)
		side = side + increment;

	return *this;
}
