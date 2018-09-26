#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "Time.h"

using namespace std;

ostream&	operator<< (ostream& osObject, const Time& timeVal)		// overloaded  insertion operator << implemented as friend to Time class
{
	osObject << endl << setfill('0')
		<< setw(2) << timeVal.hour << ':'
		<< setw(2) << timeVal.min  << ':'
		<< setw(2) << timeVal.sec  << endl;

	return osObject;
}

Time::Time()                              // default constructor
{
	setTime(0, 0, 0);
}

Time::Time(int h, int m, int s)           // parameterized constructor
{
	setTime(h, m, s);
}

void	Time::setTime(int h, int m, int s)
{
	hour = h;
	min  = m;
	sec  = s;
}

Time	Time::operator++()				//  pre-increment operator
{
	sec++;
	adjustIncrementedTime();

	return *this;						// return incremented value of Time object
}

Time	Time::operator++(int x)			// post-increment operator
{
	Time	temp = *this;
	sec++;
	adjustIncrementedTime();

	return temp;		// return original value of Time object
}

void	Time::adjustIncrementedTime()
{
	if (sec > 59)
	{
		sec = 0;
		min++;
		if (min > 59)
		{
			min = 0;
			hour++;
			if (hour > 23)
			{
				hour = 0;
			}
		}
	}
}

