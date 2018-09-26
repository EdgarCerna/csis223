// SquareClass.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

class Square			// define Square class
{
public:
	Square()					// default constructor for Square class
	{
		sideLength = 1.0;		// set default values to initialize instance of Square
		perimeter  = 4.0;
		area       = 1.0;
	}
	Square(double side)             	// Square class constructor (with parameter)
	{
		sideLength = side;
		calculateSquareValues();
	}
	void     setSideLength(double side)	// mutator function    (setter)
	{
		sideLength = side;
		calculateSquareValues();
	}
	double   getSideLength()			// accessor functions (getters)
	{
		return sideLength;
	}
	double   getPerimeter()
	{
		return perimeter;
	}
	double   getArea()
	{
		return area;
	}
private:
	void     calculateSquareValues()	// helper function called only from within Square class
	{
		perimeter = 4 * sideLength;
		area = sideLength * sideLength;
	}
	double   sideLength;
	double   perimeter;
	double   area;
};

int main()
{
	Square   thisSquare(3.95);			// declare instance of Square class

	cout << endl << fixed << setprecision(3);
	cout << "properties:  "
		 << thisSquare.getSideLength() << "   "
		 << thisSquare.getPerimeter()  << "   "
		 << thisSquare.getArea()       << endl;

	cout << endl;
	system("pause");
	return 0;
}

