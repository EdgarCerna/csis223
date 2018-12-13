#include "StdAfx.h"
#include "Shape.h"
#include "Circle.h"
#include <iostream>

using namespace std;

// constructors
Circle::Circle() :
  Shape()
{
	setRadius(1);
}

Circle::Circle(int newX, int newY, int newRadius) : 
  Shape(newX, newY)
{
	setRadius(newRadius);
}

// accessors and mutators for the radius
int  Circle::getRadius()
{
	return radius;
}

void Circle::setRadius(int newRadius)
{
	radius = newRadius;
}

// display circle info
void Circle::display()
{
	cout << fixed << setprecision(3);
	cout << "Circle   : (" << setw(2) << getX() << ',' << setw(2) << getY() << ')'
		<< "  radius: " << setw(2) << getRadius() 
		<< "              " << " area: " << right << setw(7) << getArea()
		<< "   perimeter: " << right << setw(7) << getPerimeter() << endl;
}

double Circle::getArea()		const
{
	return (PI * radius) * (PI * radius);
}

double Circle::getPerimeter()	const
{
	return PI * 2 * radius;
}

// overloaded operators
bool  Circle::operator==(const	Circle& otherCircle)  const		// overloaded equality   operator ==
{
	bool	result = false;

	if (radius == otherCircle.radius)
		result = true;

	return result;
}

bool  Circle::operator!=(const	Circle& otherCircle)  const		// overloaded inequality operator !=
{
	return	(radius != otherCircle.radius);
}

Circle  Circle::operator*(int	factor)				// overloaded multiply   operator *
{
	if (factor > 0)
		setRadius(radius * factor);

	return *this;
}

Circle  Circle::operator+(int	increment)			// overloaded addition   operator +
{
	if ((radius + increment) > 0)
		setRadius(radius + increment);
	
	return *this;
}

