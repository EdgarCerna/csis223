#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include "Time.h"

using namespace std;

ostream&	operator<< (ostream& osObject, const Time& timeVal)				// overloaded  insertion operator << implemented as friend to Time class
{
	osObject << endl << setfill('0')
		<< setw(2) << timeVal.hour << ':'
		<< setw(2) << timeVal.min << ':'
		<< setw(2) << timeVal.sec << endl;

	return osObject;
}

istream&	operator>> (istream& isObject, Time& timeVal)					// overloaded extraction operator >> implemented as friend to Time class
{
	isObject >> timeVal.hour >> timeVal.min >> timeVal.sec;

	return isObject;
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

void	Time::displayTime() const
{
	cout << setfill('0') << right
		 << setw(2) << hour << ':'
		 << setw(2) << min  << ':'
		 << setw(2) << sec;
}

bool  Time::operator==(const Time& timeVal) const  // overloaded equals operator       ==
{
   return (hour == timeVal.hour && min == timeVal.min && sec == timeVal.sec);
}

bool  Time::operator!=(const Time& timeVal) const  // overloaded not equal operator    !=
{
   return (hour != timeVal.hour || min != timeVal.min || sec != timeVal.sec);
}

bool  Time::operator<(const  Time& timeVal) const  // overloaded less than operator    <
{
   bool     result = false;

   if      (hour < timeVal.hour)

      result = true;
   else if (hour == timeVal.hour)
   {
      if (min < timeVal.min)
         result = true;
      else if (min == timeVal.min)
      {
         if (sec < timeVal.sec)
            result = true;
      }
   }
   return result;
}

bool  Time::operator>(const  Time& timeVal) const	// overloaded greater than operator >
{
   return((hour >  timeVal.hour) ||
		  (hour == timeVal.hour && min >  timeVal.min) ||
		  (hour == timeVal.hour && min == timeVal.min  && sec > timeVal.sec));
}

bool  Time::operator<=(const  Time& timeVal) const	// overloaded less than or equal operator    <=
{
	bool	result;

	result = !(*this > timeVal);					// negate comparison of left and right times with > operator
	return result;
}

bool  Time::operator>=(const  Time& timeVal) const	// overloaded greater than or equal operator =>
{
	bool	result;

	result = operator<(timeVal);					// test < by direct call
	return !result;									// return (negated) opposite result
}
