#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

class Square
{
public:
	Square()
	{
		sideLength = 1;
		perimeter = 4;
		area = 1;
	}
	Square(double side)
	{
		sideLength = side;
		calculateSquareValues();
	}
	void setSideLength(double side)
	{
		sideLength = side;
		calculateSquareValues();
	}
	double getSideLength()
	{
		return sideLength;
	}
	double getPerimeter()
	{
		return perimeter;
	}
	double getArea()
	{
		return area;
	}
private:
	void calculateSquareValues()
	{
		perimeter = 4 * sideLength;
		area = sideLength * sideLength;
	}

	double sideLength;
	double perimeter;
	double area;
};

int main()
{
	Square thisSquare(3.95);		//Declare instance of Square class (parameter constructor)

	cout << endl << fixed << setprecision(3);
	cout << "properties:  " << thisSquare.getSideLength() << "   " << thisSquare.getPerimeter() << "   " << thisSquare.getArea() << endl;

	cout << endl;
	system("pause");
	return 1;
}