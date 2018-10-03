#pragma once
class Circle
{
public:
	Circle();
	Circle(double initialRadius);
	double getRadius() const;
	double getDiameter() const;
	double getArea() const;
	void setRadius(double newRadius);
private:
	double radius;
};
