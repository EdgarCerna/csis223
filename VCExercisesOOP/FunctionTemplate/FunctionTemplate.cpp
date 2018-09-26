// FunctionTemplate.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

template <class Type>
Type larger(Type, Type);

int main()
{
	string	str01 = "Abcd";
	string	str02 = "wxyz";

	cout << endl << ' ' << larger(27, 14) << endl << endl;
	cout << endl << ' ' << larger(88.445, 563.81) << endl << endl;
	cout << endl << ' ' << larger('a', 'Z') << endl << endl;
	cout << endl << ' ' << larger("Wxyz"s, "abcd"s) << endl << endl;
	cout << endl << ' ' << larger(str01, str02) << endl << endl;

	cout << endl;
	system("pause");
	return 0;
}

template <class Type>
Type larger(Type alpha, Type beta)
{
	if (alpha > beta)
		return alpha;
	else
		return beta;
}
