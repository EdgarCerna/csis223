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
	double   sideLength;		// data members of class private by default 
	double   perimeter;
	double   area;
};

int main()
{
	Square   thisSquare;		// declare instance of Square class

	thisSquare.perimeter  = 99.653;

	cout << endl << fixed << setprecision(3);
	cout << "properties:  "
		 << thisSquare.sideLength << "   "
		 << thisSquare.perimeter  << "   "
		 << thisSquare.area       << endl;

	cout << endl;
	system("pause");
	return 0;
}

