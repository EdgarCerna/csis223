#pragma once
#include <iostream>

using namespace std;

class Time
{
public:
	friend	ostream&	operator<< (ostream&, const Time&);		// overloaded insertion  operator << implemented as friend to Time class

	Time();
	Time(int h, int m, int s);
	void	setTime(int h, int m, int s);

	Time	operator++();					//  pre-increment operator
	Time	operator++(int);				// post-increment operator

private:
	void	adjustIncrementedTime();
	int	hour;
	int	min;
	int	sec;
};
