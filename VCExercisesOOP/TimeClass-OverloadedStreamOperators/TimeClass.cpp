// TimeClass.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
	Time	wakeUp(6, 45, 0);
	Time	bedTime(23, 30, 0);
	Time	midNight(24, 0, 0);
	Time	noon(12, 0, 0);
	Time	when;
	Time	endingTime;

	cout << endl;
	wakeUp.displayStandard();
//	wakeUp.displayUniversal();
	cout << wakeUp;					// overloaded insertion operator << replaces .displayUniversal() member function
	wakeUp.displayMilitary();
	
	cout << endl;
	bedTime.displayStandard();
//	bedTime.displayUniversal();
	cout << bedTime;				// overloaded insertion operator << replaces .displayUniversal() member function
	bedTime.displayMilitary();

	cout << endl;
	midNight.displayStandard();
//	midNight.displayUniversal();	// overloaded insertion operator << replaces .displayUniversal() member function
	cout << midNight;
	midNight.displayMilitary();

	cout << endl;
	noon.displayStandard();
//	noon.displayUniversal();
	cout << noon;					// overloaded insertion operator << replaces .displayUniversal() member function
	noon.displayMilitary();

	cout << endl;
	when.displayStandard();
//	when.displayUniversal();
	cout << when;					// overloaded insertion operator << replaces .displayUniversal() member function
	when.displayMilitary();

	cout << endl << endl << "Type time value as\nhh mm ss:\n";
	cin  >> endingTime;				// overloaded extraction operator >> accepts data member input  hh mm ss
	cout << endingTime;				// overloaded insertion  operator << displays universal time value

	cout << endl << endl;
	system("pause");
	return 0;
}

