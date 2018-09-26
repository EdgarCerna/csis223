// Time.h
#ifndef TIME_H
#define TIME_H

using namespace std;

class Time
{
	friend	ostream&	operator<< (ostream&, const Time&);		// overloaded insertion  operator << implemented as friend to Time class
	friend	istream&	operator>> (istream&, Time&);			// overloaded extraction operator >> implemented as friend to Time class

public:
	Time();									// default constructor
	Time(int hr, int min, int sec);			// parameterized constructor

	void	setTime(int h, int m, int s);	// mutator functions (setters)	
	void	setHour(int h);
	void	setMinute(int m);
	void	setSecond(int s);

	int		getHour()			const;		// accessor functions (getters)
	int		getMinute()			const;
	int		getSecond()			const;
											// helper functions
	void	displayUniversal() const;
	void	displayStandard()  const;
	void	displayMilitary()  const;

private:									// private data members
	int		hour;
	int		minute;
	int		second;
};

#endif