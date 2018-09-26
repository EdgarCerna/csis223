// OperatorOverload-TimeClass.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
	Time    time00;

	time00.setTime(5, 29, 57);
	cout << time00;

	cout << time00++;
	cout << time00;

	cout << ++time00;
	cout << ++time00;

	cout << "\n========\n";

	time00.setTime(11, 59, 57);
	cout << time00;

	cout << time00++;
	cout << time00;

	cout << ++time00;
	cout << ++time00;

	cout << "\n========\n";

	time00.setTime(23, 59, 57);
	cout << time00;

	cout << time00++;
	cout << time00;

	cout << ++time00;
	cout << ++time00;	
	
	cout << endl << endl;
	system("pause");
	return 0;
}
