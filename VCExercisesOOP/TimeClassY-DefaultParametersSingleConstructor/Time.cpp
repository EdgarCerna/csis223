// Time.cpp
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include "Time.h"

using namespace std;

Time::Time(int hr, int min, int sec)		// parameterized constructor only - default parameters
{
	setTime(hr, min, sec);
}
											// mutator functions (setters)
void	Time::setTime(int h, int m, int s)	
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void	Time::setHour(int h)
{
	if (h >= 0 && h < 24)
		hour = h;
	else
		hour = 0;
}

void	Time::setMinute(int m)
{
	if (m >= 0 && m < 60)
		minute = m;
	else
		minute = 0;
}

void	Time::setSecond(int s)
{
	if (s >= 0 && s < 60)
		second = s;
	else
		second = 0;
}
											// accessor functions (getters)
int		Time::getHour()		const
{
	return hour;
}

int		Time::getMinute()	const
{
	return minute;
}

int		Time::getSecond()	const
{
	return second;
}
											// helper functions
void	Time::displayUniversal() const
{
	cout << endl << setfill('0')
		 << setw(2) << hour   << ':'
		 << setw(2) << minute << ':'
		 << setw(2) << second << endl;
}

void	Time::displayStandard()  const
{
	int	   hr;
	string lbl;

	hr = hour % 12;
	if (hr == 0 )
		hr = 12;

	if (hour < 12)
		lbl = " am";
	else
		lbl = " pm";

	cout << endl << setfill('0')
		 << setw(2) << hr     << ':'
		 << setw(2) << minute << ':'
		 << setw(2) << second << lbl << endl;
}

void	Time::displayMilitary() const
{
	cout << endl << setfill('0')
		 << setw(2) << hour
		 << setw(2) << minute << endl;
}
