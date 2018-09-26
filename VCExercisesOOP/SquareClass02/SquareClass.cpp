// SquareClass.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

class Square			// define Square class
{
public:
	double   sideLength;		// data members of class private by default 
	double   perimeter;
	double   area;
};

int main()
{
	Square   thisSquare;		// declare instance of Square class

	thisSquare.sideLength = 4.35;
	thisSquare.perimeter  = 17.4;
	thisSquare.area       = 18.9225;

	cout << endl << fixed << setprecision(3);
	cout << "properties:  "
		 << thisSquare.sideLength << "   "
		 << thisSquare.perimeter  << "   "
		 << thisSquare.area       << endl;

	cout << endl;
	system("pause");
	return 0;
}

