#include "pch.h"
#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
	Circle circle01;
	Circle circle02(5.7);

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