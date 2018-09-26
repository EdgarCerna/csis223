// DisplayRangeLimits.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <cstdlib>
#include <climits>
#include <iostream>

using namespace std;

int main()
{
	cout << endl;
	cout << "Max  char value:  " << CHAR_MAX << endl  << endl;
	cout << "Min  char value: "  << CHAR_MIN << endl  << endl;
	cout << "Max short value:  " << SHRT_MAX << endl  << endl;
	cout << "Min short value: "  << SHRT_MIN << endl  << endl;
	cout << "Max  int  value:  " << INT_MAX  << endl  << endl;
	cout << "Min  int  value: "  << INT_MIN  << endl  << endl;
	cout << "Max  long value:  " << LONG_MAX << endl  << endl;
	cout << "Min  long value: "  << LONG_MIN << endl  << endl;
	cout << "Max  long long   value:  " << LLONG_MAX  << endl << endl;
	cout << "Min  long long   value: "  << LLONG_MIN  << endl << endl;
	cout << "Max unsigned char  val:  " << UCHAR_MAX  << endl << endl;
	cout << "Max unsigned short val:  " << USHRT_MAX  << endl << endl;
	cout << "Max unsigned int value:  " << UINT_MAX   << endl << endl;
	cout << "Max unsigned long  val:  " << ULONG_MAX  << endl << endl;
	cout << "Max unsigned long long:  " << ULLONG_MAX << endl << endl;
	cout << "number of bits in byte:  " << CHAR_BIT   << endl << endl;

	system("pause");
	return EXIT_SUCCESS;
}
