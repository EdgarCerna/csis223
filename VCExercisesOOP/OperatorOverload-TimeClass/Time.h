#pragma once

class Time
{
public:
	Time();
	Time(int h, int m, int s);
	void	setTime(int h, int m, int s);
	void	displayTime() const;

   bool  operator==(const Time&) const;		// overloaded equals operator       ==
   bool  operator!=(const Time&) const;		// overloaded not equal operator    !=
   bool  operator<(const  Time&) const;		// overloaded less than operator    <
   bool  operator>(const  Time&) const;		// overloaded greater than operator >
   bool  operator<=(const Time&) const;		// overloaded less than or equal operator    <=
   bool  operator>=(const Time&) const;		// overloaded greater than or equal operator =>

private:
	int	hour;
	int	min;
	int	sec;
};
