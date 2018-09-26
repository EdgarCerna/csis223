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

	cout << endl;
	wakeUp.displayStandard();
	wakeUp.displayUniversal();
	wakeUp.displayMilitary();
	
	cout << endl;
	bedTime.displayStandard();
	bedTime.displayUniversal();
	bedTime.displayMilitary();

	cout << endl;
	midNight.displayStandard();
	midNight.displayUniversal();
	midNight.displayMilitary();

	cout << endl;
	noon.displayStandard();
	noon.displayUniversal();
	noon.displayMilitary();

	cout << endl;
	when.displayStandard();
	when.displayUniversal();
	when.displayMilitary();

	cout << endl << endl;
	system("pause");
	return 0;
}

