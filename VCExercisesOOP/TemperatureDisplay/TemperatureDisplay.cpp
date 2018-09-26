// TemperatureDisplay.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Temperature.h"
#include <iostream>

using namespace std;

int main()
{
	Temperature t01(0, 'K');
	Temperature t02(-273.15, 'C');
	Temperature t03(-459.67, 'F');
	Temperature t04(0, 'C');
	Temperature t05(100, 'C');
	Temperature t06(32, 'F');
	Temperature t07(212, 'F');

	t01.displayTemperature();
	t02.displayTemperature();
	t03.displayTemperature();
	t04.displayTemperature();
	t05.displayTemperature();
	t06.displayTemperature();
	t07.displayTemperature();

	cout << endl << endl;
	system("pause");
	return 0;
}