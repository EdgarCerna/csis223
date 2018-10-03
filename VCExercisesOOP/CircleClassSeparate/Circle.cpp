#include "pch.h"
#include "Circle.h"

Circle::Circle()
{
	radius = 1.0;
}
Circle::Circle(double initialRadius)
{
	radius = initialRadius;
}
double Circle::getRadius() const
{
	return radius;
}
double Circle::getDiameter() const
{
	return radius * 2.0;
}
double Circle::getArea() const
{
	return radius * radius * 3.14159;
}
void Circle::setRadius(double newRadius)
{
	radius = newRadius;
}
