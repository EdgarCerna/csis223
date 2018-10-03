#pragma once
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159;

class Circle
{
public:
	Circle();
	Circle(double initialRadius);
	double getRadius() const;
	double getDiameter() const;
	double getArea() const;
	double getCircumference() const;
	void setRadius(double newRadius);
	void displayCircleInfo(string) const;
private:
	double radius;
};
