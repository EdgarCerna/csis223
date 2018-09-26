
// Temperature.h		Header file for Temperature class
//
#ifndef  Temperature_H
#define  Temperature_H

const	double	MIN_CELSIUS = -273.15;		// lowest Celsius	 temperature
const	double	MIN_FAHRENHEIT = -459.67;	// lowest Fahrenheit temperature
const	double	MIN_KELVIN = 0.0;			// lowest Kelvin	 temperature (absolute zero)

class Temperature
{
public:
	Temperature();							// default constructor
	Temperature(double, char);				// constructor with parameters

	void	displayTemperature();			// display values in output stream
	bool	isValid(double, char);			// check for valid degrees and scale

	double	getFahrenheit();				// return degrees in Fahrenheit
	double	getCelsius();					// return degrees in Celsius
	double	getKelvin();					// return degrees in Kelvin

private:
	double	degrees;
	char	scale;
};

#endif