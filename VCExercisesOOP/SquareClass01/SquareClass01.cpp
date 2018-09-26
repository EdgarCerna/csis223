// SquareClass01.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

struct Square			// define Square struct
{
	double   sideLength;		// data members of struct public by default 
	double   perimeter;
	double   area;
};

int main()
{
	Square   thisSquare;		// declare instance of Square struct

	thisSquare.sideLength =  4.35;
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