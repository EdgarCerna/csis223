#include "StdAfx.h"
#include "Shape.h"

// constructors
Shape::Shape()
{
	moveTo(0, 0);
}

Shape::Shape(int newX, int newY)
{
   moveTo(newX, newY);
}

// accessors for x and y
int Shape::getX()
{
	return x;
}
int Shape::getY()
{
   return y;
} 
void Shape::setX(int newX)
{
   x = newX;
}
void Shape::setY(int newY)
{ 
   y = newY;
}

// move the shape position
void Shape::moveTo(int newX, int newY)
{
   setX(newX);
   setY(newY);
}

void Shape::rMoveTo(int deltaX, int deltaY)
{
   moveTo(getX() + deltaX, getY() + deltaY);
}

// abstract display method

void Shape::display()
{
}
