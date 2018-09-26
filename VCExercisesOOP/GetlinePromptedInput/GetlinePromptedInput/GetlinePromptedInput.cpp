// GetlinePromptedInput.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string	name;
	string	addr;
	string	city;
	string	state;
	string	zip;

	cout << endl << "Enter  entire name:  ";
	getline(cin, name);

	cout << endl << "Enter  street addr:  ";
	getline(cin, addr);

	cout << endl << "Enter name of city:  ";
	getline(cin, city);

	cout << endl << "Enter state abbrev:  ";
	getline(cin, state);

	cout << endl << "Enter the zip code:  ";
	getline(cin, zip);

	state[0] = toupper(state[0]);
	state[1] = toupper(state[1]);

	cout << endl << endl << "Contact mailing label:" << endl << endl;
	cout << name << endl;
	cout << addr << endl;
	cout << city << ", " << state << "   " << zip << endl;

	cout << endl;
	system("pause");
	return 0;
}

