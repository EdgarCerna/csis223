// PointerExerciseX.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int  *ptr1;				// pointer to integer
	int*  ptr2;				// pointer to integer
	int * ptr3;				// pointer to integer
	int	 *ptr4, *ptr5;		// pointer to integer multiple declarations

	int	  x = 47;
	int	 *p;				// pointer to integer type
	p = &x;					// pointer assigned the address of integer x
	cout << endl << x << "     " << *p << "     " << p << endl;

	int	  intArr[10] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50 };
	int	 *intPtr;
	intPtr = &intArr[0];

	cout << endl;
	for (int i = 0; i < 10; i++)
	{
	//	cout << intArr[i] << "   ";		// display array elements using subscripts
		cout << *intPtr++ << "   ";		// display array elements using dereferenced pointer; increment integer pointer
	//	cout << intPtr++  << "  ";		// display address of each array element - 4-byte integers in array
	}
	cout << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}