// FunctionOverloading.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int		larger(int, int);
double	larger(double, double);
char	larger(char, char);
string	larger(string, string);

int main()
{
	string   holdStr1;
	string   holdStr2;

	cout << endl << ' ' << larger(27, 14) << endl << endl;
	cout << endl << ' ' << larger(88.445, 563.81) << endl << endl;
	cout << endl << ' ' << larger('a', 'Z') << endl << endl;
	cout << endl << ' ' << larger("Abcdefghij", "tuvwxyz") << endl << endl;

	cout << endl << endl << " Enter  first string value:  ";
	cin  >> holdStr1;
	cout << endl << endl << " Enter second string value:  ";
	cin  >> holdStr2;

	cout << endl << endl;
	cout << "    Larger value is:  " << larger(holdStr1, holdStr2) << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}

int		larger(int alpha, int beta)
{
	if (alpha > beta)
		return alpha;
	else
		return beta;
}

double	larger(double alpha, double beta)
{
	if (alpha > beta)
		return alpha;
	else
		return beta;
}

char	   larger(char alpha, char beta)
{
	if (alpha > beta)
		return alpha;
	else
		return beta;
}

string	larger(string alpha, string beta)
{
	if (alpha > beta)
		return alpha;
	else
		return beta;
}
