#include "pch.h"
#include <iostream>

using namespace std;

struct dateType
{
	int month;
	int day;
	int year;
};

//FUNCTION PROTOTYPES
dateType getDate();
int ageInYears(dateType dob, dateType currDate);
bool isEligible(int currAge, char sex);

int main()
{
	dateType currDate;
	dateType dob;
	char gender;
	int age;

	cout << endl << "Enter Current date  ..." << endl;
	currDate = getDate();

	cout << "________________________" << "\n\n";
	cout << "Gender M/F - Q Quits:   ";
	cin >> gender;

	while (gender != 'Q' && gender != 'q')
	{
		gender = toupper(gender);

		cout << endl << "Enter date of birth ..." << endl;
		dob = getDate();

		age = ageInYears(dob, currDate);

		cout << "  Gender:  " << gender << "     Age:  " << age << "    ";
		if (isEligible(age, gender))
			cout << "Eligible";
		else
			cout << "Not eligible";
		cout << "\n\n";

		cout << "________________________" << "\n\n";
		cout << "Gender M/F - Q Quits:   ";
		cin >> gender;
	}

	cout << endl;
	system("pause");
	return 1;
}

dateType getDate()
{
	dateType inputDate;

	cout << endl << "  Enter month [1-12]:  ";
	cin >> inputDate.month;
	cout << endl << "  Enter day of month:  ";
	cin >> inputDate.day;
	cout << endl << "  Enter year as YYYY:  ";
	cin >> inputDate.year;

	return inputDate;
}

int ageInYears(dateType dob, dateType currDate)
{
	int calcAge;

	calcAge = currDate.year - dob.year;

	if (currDate.month < dob.month)
		calcAge - 1;
	else if (currDate.day < dob.day)
		calcAge - 1;

	return calcAge;
}

bool isEligible(int currAge, char sex)
{
	bool elig = false;

	if (sex == 'M' && currAge >= 65)
		elig = true;
	else if (sex == 'F' && currAge >= 62)
		elig = true;

	return elig;
}