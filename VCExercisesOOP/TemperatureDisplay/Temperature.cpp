#include "stdafx.h"
#include "Temperature.h"
#include <iostream>
#include <iomanip>

using namespace std;

// constructors
Temperature::Temperature()             // default constructor
{
	degrees = 0.0;
	scale   = 'C';
}

Temperature::Temperature(double degreesVal, char scaleType)
{
	if (isValid(degreesVal, scaleType))
	{
		degrees = degreesVal;
		scale   = scaleType;
	}
	else
	{
		degrees = 0.0;
		scale = 'C';
	}
}

// other member functions

void	Temperature::displayTemperature()	  		// display temperature and converted values in output stream
{
	cout << endl << endl << "Temperature:  " << fixed << setprecision(2)
		 << setw(8)      << getFahrenheit()  << " F    "
		 << setw(8)      << getCelsius()     << " C    "
		 << setw(8)      << getKelvin()      << " K"  << endl;
}

bool	Temperature::isValid(double d, char s)		// check for valid degrees and scale
{
	double	minTemp;

	s = toupper(s);

	if (s == 'C')
		minTemp = MIN_CELSIUS;
	else if (s == 'F')
		minTemp = MIN_FAHRENHEIT;
	else if (s == 'K')
		minTemp = MIN_KELVIN;
	else
		return false;								// return false if invalid scale

	if (d < minTemp)
		return false;								// return false if below absolute zero

	return true;									// return true  if previous checks valid
}

double	Temperature::getFahrenheit()				// return degrees Fahrenheit
{
	if (scale == 'C')
		return ((9 / 5.0) * degrees) + 32;
	else if (scale == 'K')
		return (9 / 5.0) * (degrees - 273.15) + 32;
	else
		return degrees;
}

double	Temperature::getCelsius() 					// return degrees Celsius
{
	if (scale == 'F')
		return (5 / 9.0) * (degrees - 32);
	else if (scale == 'K')
		return degrees - 273.15;
	else
		return degrees;
}

double	Temperature::getKelvin()					// return degrees Kelvin
{
	if (scale == 'C')
		return degrees + 273.15;
	else if (scale == 'F')
		return (5 / 9.0) * (degrees + 459.67);
	else
		return degrees;
}
