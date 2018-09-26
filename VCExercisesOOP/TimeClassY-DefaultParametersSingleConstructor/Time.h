// Time.h
#ifndef TIME_H
#define TIME_H

class Time
{
public:
	Time(int hr = 0, int min = 0, int sec = 0);	// parameterized constructor only - default parameters

	void	setTime(int h, int m, int s);		// mutator functions (setters)	
	void	setHour(int h);
	void	setMinute(int m);
	void	setSecond(int s);

	int		getHour()		const;				// accessor functions (getters)
	int		getMinute()		const;
	int		getSecond()		const;
												// helper functions
	void	displayUniversal() const;
	void	displayStandard()  const;
	void	displayMilitary()  const;

private:										// private data members
	int		hour;
	int		minute;
	int		second;
};

#endif