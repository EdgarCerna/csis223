// ExceptionClass.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class ValueOutOfRange               // exception handler class definition
{
public:
	ValueOutOfRange()                // default constructor for class
	{
		msg = "out of range";         //    generic default message
	}
	ValueOutOfRange(string descr)    // constructor with situation parameter
	{
		msg = descr;
	}
	string message()                 // accessor function for message value
	{
		return msg;
	}
private:
	string	msg;                    // data member msg string
};

int main()
{
	int		score;

	cout << fixed << endl;
	cout << endl << " Enter score [1-100]:  ";
	cin >> score;
	cout << endl << endl;

	try
	{
		if (score < 0)
			throw ValueOutOfRange("too low");
		if (score == 0)
			throw ValueOutOfRange("zero");
		if (score > 100)
			throw ValueOutOfRange();

		cout << "   Accepted score is:  " << score;
	}
	catch (ValueOutOfRange voor)
	{
		cout << " Invalid score.  Value is " << voor.message() << ".";
	}

	cout << endl << endl << endl;
	system("pause");
	return 0;
}
