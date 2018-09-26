// OperatorOverload-TimeClass.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include "Time.h"

using namespace std;

template <class Type>
Type larger(Type alpha, Type beta)
{
	if (alpha > beta)
		return alpha;
	else
		return beta;
}

void		display(Time first, string op, Time second);
string		compareTime(const Time& left, string op, const Time& right);

int main()
{
	Time    time01(4, 45, 30);
	Time    time02;
	Time    time03(4, 45, 29);
	Time    time04(4, 45, 31);
	Time	time05(4, 44, 55);
	Time	time06(4, 46, 0);
	Time	time07(3, 0, 20);
	Time	time08(5, 10, 0);
	Time	time09(0, 0, 45);
	Time	time10(23, 50, 15);

	time02 = time01;

	cout << endl;

	display(time01, "==", time02);
	display(time01, "!=", time02);
	display(time01, "==", time03);
	display(time03, "!=", time01);
	cout << endl;
	display(time03, "<", time01);
	display(time01, "<", time03);
	display(time03, ">", time01);
	display(time04, ">", time01);
	cout << endl;
	display(time03, "<=", time01);
	display(time03, ">=", time01);
	display(time03, "<=", time03);
	display(time01, ">=", time01);
	cout << endl;
	display(time04, "<", time05);
	display(time01, "<", time10);
	display(time04, ">", time05);		// difference in minutes (same hour)
	display(time01, ">", time10);		// difference in hours

	cout << endl;

	Time	time99;						// declare Time value (default constructor)

	time99 = larger(time01, time03);
	time99.displayTime();

	cout << endl << time99 << endl;

	time99 = larger(time01, time04);
	time99.displayTime();

	cout << endl << time99 << endl;

	cout << endl;
	system("pause");
	return 0;
}

void display(Time first, string op, Time second)
{
	first.displayTime();
	cout << ' ' << left << setfill(' ') << setw(2) << op << ' ';
	second.displayTime();
	cout << right << setfill(' ') << setw(6) << "is  " << compareTime(first, op, second) << endl << endl;
}

string		compareTime(const Time& left, string op, const Time& right)
{
	bool	outcome;

	if (op == "==")
		outcome = (left == right);
	else if (op == "!=")
		outcome = (left != right);
	else if (op == "<")
		outcome = (left < right);
	else if (op == ">")
		outcome = (left > right);
	else if (op == "<=")
		outcome = (left <= right);
	else if (op == ">=")
		outcome = (left >= right);

	if (outcome)
		return "TRUE";
	else
		return "FALSE";
}

