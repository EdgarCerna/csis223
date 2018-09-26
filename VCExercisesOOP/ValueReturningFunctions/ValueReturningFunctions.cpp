// ValueReturningFunctions.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const	   double	PI = 3.14159265;

double	diameter(double r)
{
	return r * 2.0;
}

double	circumference(double r)
{
	return diameter(r) * PI;
}

double	square(double val)
{
	return val * val;
}

double	areaCircle(double r)
{
	return PI * square(r);			// PI * Radius squared
}

double	surfaceAreaSphere(double r)
{
	return 4.0 * PI * square(r);
}

double	cube(double r)
{
	return r * r * r;
}

double	volumeSphere(double r)
{
	return (4.0 / 3.0) * PI * cube(r);
}

int		main()
{
	double	radius =  6.85;
	double	height = 17.4; 

	cout << endl << fixed << setprecision (3);
	cout << "Radius of circle          " << setw(10) << radius                    << endl;
	cout << "Diameter of circle:       " << setw(10) << diameter(radius)          << endl;
	cout << "Circumference of circle:  " << setw(10) << circumference(radius)     << endl;
	cout << "Square of value:          " << setw(10) << square(radius)            << endl;
	cout << "Area of circle:           " << setw(10) << areaCircle(radius)        << endl;
	cout << "Surface area of sphere:   " << setw(10) << surfaceAreaSphere(radius) << endl;
	cout << "Cube of value:            " << setw(10) << cube(radius)              << endl;
	cout << "Volume of sphere:         " << setw(10) << volumeSphere(radius)      << endl;
	cout << endl << endl;

	cout << "Volume of cylinder  -  radius  "	<<  setw(5) << radius << "    "
												<<  setw(5) << height << "  units high  ===> "
												<< setw(10) << areaCircle(radius) * height << endl << endl;
	cout << endl;
	system("pause");
	return 0;
}
