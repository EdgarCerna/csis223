#include "pch.h"
#include <iostream>

using namespace std;

class XCircle
{
public:
	XCircle()
	{
		radius = 1.0;
	}
	XCircle(double initialRadius)
	{
		radius = initialRadius;
	}
	double getRadius() const
	{
		return radius;
	}
	double getDiameter() const
	{
		return radius * 2.0;
	}
	double getArea() const
	{
		return radius * radius * 3.14159;
	}
	void setRadius(double newRadius)
	{
		radius = newRadius;
	}
private:
	double radius;
};

int main()
{
	XCircle circle01;
	XCircle circle02(5.7);

	cout << "\n\n";
	cout << "circle01 - Radius:  " << circle01.getRadius()
		<< "  Diameter:  " << circle01.getDiameter()
		<<    "   Area:  " << circle01.getArea();

	cout << "\n\n";
	cout << "circle02 - Radius:  " << circle02.getRadius()
		<< "  Diameter:  " << circle02.getDiameter()
		<< "   Area:  " << circle02.getArea();

	circle01.setRadius(3.75);

	cout << "\n\n";
	cout << "circle01 - Radius:  " << circle01.getRadius()
		<< "  Diameter:  " << circle01.getDiameter()
		<< "   Area:  " << circle01.getArea();

	circle02 = circle01;

	cout << "\n\n";
	cout << "circle02 - Radius:  " << circle02.getRadius()
		<< "  Diameter:  " << circle02.getDiameter()
		<< "   Area:  " << circle02.getArea();

    cout << "\n\n";
	system("pause");
	return 0;
}