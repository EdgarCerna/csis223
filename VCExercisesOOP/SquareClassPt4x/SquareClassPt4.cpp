// SquareClassPt4.cpp : Defines the entry point for the console application.
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
	}
	Square(double side)             	// Square class constructor (with parameter)
	{
		sideLength = side;
	}
	void     setSideLength(double side)	// mutator function    (setter)
	{
		sideLength = side;
	}
	double   getSideLength()			// accessor functions (getters)
	{
		return sideLength;
	}
	double   getPerimeter()
	{
		return 4 * sideLength;
	}
	double   getArea()
	{
		return sideLength * sideLength;
	}
	void	displaySquareInfo()
	{
		cout << endl << fixed << setprecision(3);
		cout << "Square values:  "
			<< setw(8) << getSideLength() << "   "
			<< setw(8) << getPerimeter() << "   "
			<< setw(8) << getArea() << endl;
	}
private:
	double   sideLength;
};

int main()
{
	Square   thisSquare(3.95);             // declare Square class instance
	Square   thatSquare;                   // declare Square instance with default constructor (no () )
	Square  *ptr1Square;                   // pointer to Square class
	Square  *ptr2Square;                   // pointer to Square class
	Square  *ptr3Square;                   // pointer to Square class

	thisSquare.displaySquareInfo();        // display 01

	thatSquare.displaySquareInfo();        // display 02

	thatSquare = thisSquare;               // assign one class object to another;
	thatSquare.displaySquareInfo();        // display 03

	thisSquare.setSideLength(6.0);         // change side length of existing square instance
	thisSquare.displaySquareInfo();        // display 04

	ptr1Square = &thatSquare;              // pointer to address of thatSquare ( &thatSquare )
	ptr1Square->displaySquareInfo();       // display 05

	ptr2Square = new Square;               // pointer to new Square object - default constructor
	ptr2Square->displaySquareInfo();       // display 06

	ptr3Square = new Square(8.0);          // pointer to new Square object - side parameter
	ptr3Square->displaySquareInfo();       // display 07

	cout << endl;
	system("pause");
	return 0;
}

