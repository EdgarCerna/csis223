// PointerDynamicVariables.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int		*intPtr;
	char	*charPtr;
	string	*strPtr;

	intPtr  = new int;			// dynamically allocate integer
	*intPtr = 825;				// assign number to integer using pointer address

	charPtr = new char[5];		// dynamically allocate char array
	strcpy(charPtr, "C++");		// copy string literal into char array

	strPtr = new string;		// dynamically allocate string
	*strPtr = "Programming";

	cout << endl << *intPtr << "     " << charPtr << "  " << *strPtr << endl;

	delete	intPtr;				// free up dynamically-allocated memory
	delete	[ ] charPtr;
	delete	strPtr;

	intPtr = new int[10];		// dynamically allocate integer array

	int j = 50;
	for (int i = 0; i < 10; i++)
	{
		intPtr[i] = j;
		j += 5;
	}

	cout << endl << endl;
	for (int i = 0; i < 10; i++)
		cout << intPtr[i] << "   ";
	cout << endl << endl;

	int	  *shallowPtr;
	int	  *deepPtr;

	shallowPtr = intPtr;		// shallow copy of intPtr array

	deepPtr = new int[10];		// dynamically allocate new integer array

	for (int i = 0; i < 10; i++)
		deepPtr[i] = intPtr[i];	// deep copy of elements in integer array

	cout << endl;
	for (int i = 0; i < 10; i++)
		cout << deepPtr[i] << "   ";
	cout << endl << endl;

	delete   [ ] intPtr;		// free memory from dynamically-allocated integer arrays
	delete   [ ] deepPtr;
	
	cout << endl;
	system("pause");
	return 0;
}

