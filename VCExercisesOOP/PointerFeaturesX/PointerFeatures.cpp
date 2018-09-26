// PointerFeatures.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int	   *p = nullptr;
	int		filler[15];
	int		num;

	cout << endl;
	cout << "Current value of p:  " <<  p << endl;

	num = 78;
	p   = &num;

	cout << endl;	
	cout << "Address       of p:  " << &p << endl;
	cout << "Current value of p:  " <<  p << endl;
	cout << "Dereferenced ptr p:  " << *p << endl;

	cout << endl;
	cout << "Value of  var  num:  " <<   num << endl;
	cout << "Addr  of  var  num:  " <<  &num << endl;

	*p = 27;

	cout << "Value of  var  num:  " <<   num << endl;
	
	cout << endl;
	system("pause");
	return 0;
}

