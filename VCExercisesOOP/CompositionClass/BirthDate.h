#pragma once
#include <iostream>

using namespace std;

class BirthDate
{
public:
	BirthDate();
	BirthDate(int m, int d, int y);

	void displayBirthDate();
private:
	int month;
	int day;
	int year;
};

