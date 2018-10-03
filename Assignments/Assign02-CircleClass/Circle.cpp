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
	return radius * radius * PI;
}
double Circle::getCircumference() const
{
	return getDiameter() * PI;
}
void Circle::setRadius(double newRadius)
{
	radius = newRadius;
}
void Circle::displayCircleInfo(string circleName) const
{
		cout << "\n\n" << fixed << setprecision(2);
		cout <<  circleName << ":  " << "Radius -  " << setw(6) << right << getRadius()
			<< "  Diameter      -  " << setw(6) << getDiameter() << endl
			<< "           Area   -  " << setw(6) << getArea() 
			<< "  Circumference -  " << setw(6) << getCircumference();
}
