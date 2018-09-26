// SetWidthFill.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double value01 = 78;
	double value02 = 576.5;
	double value03 = 24.51;
	double value04 = 64791.467;
	double value05 = 4812.4994;

	cout << endl;
	cout << "I/O Manipulation settings - fixed setprecision(n) setw(n) left right setfill(ch)" << endl;
	cout << "------------ ------------ ------------ ------------ ------------" << endl;

	cout << endl;
	cout << setw(12) << value01 << ' ' << setw(12) << value02 << ' ' << setw(12) << value03 << ' ' 
	     << setw(12) << value04 << ' ' << setw(12) << value05 << ' ' << endl     << endl;
	
	cout << endl << showpoint;
	cout << setw(12) << value01 << ' ' << setw(12) << value02 << ' ' << setw(12) << value03 << ' ' 
	     << setw(12) << value04 << ' ' << setw(12) << value05 << ' ' << endl     << endl;
   
	cout.unsetf(ios::showpoint);
	
	cout << endl << fixed;
	cout << setw(12) << value01 << ' ' << setw(12) << value02 << ' ' << setw(12) << value03 << ' ' 
	     << setw(12) << value04 << ' ' << setw(12) << value05 << ' ' << endl     << endl;

	cout << endl << fixed << setprecision(0);
	cout << setw(12) << value01 << ' ' << setw(12) << value02 << ' ' << setw(12) << value03 << ' ' 
	     << setw(12) << value04 << ' ' << setw(12) << value05 << ' ' << endl     << endl;

	cout << endl << fixed << setprecision(2);
	cout << setw(12) << value01 << ' ' << setw(12) << value02 << ' ' << setw(12) << value03 << ' ' 
	     << setw(12) << value04 << ' ' << setw(12) << value05 << ' ' << endl     << endl;

	cout << endl << fixed << setprecision(3);
	cout << setw(12) << value01 << ' ' << setw(12) << value02 << ' ' << setw(12) << value03 << ' ' 
	     << setw(12) << value04 << ' ' << setw(12) << value05 << ' ' << endl     << endl;

	cout << endl << fixed << setprecision(4);
	cout << setw(12) << value01 << ' ' << setw(12) << value02 << ' ' << setw(12) << value03 << ' ' 
	     << setw(12) << value04 << ' ' << setw(12) << value05 << ' ' << endl     << endl;

	cout << endl << left;
	cout << setw(12) << "abc"   << ' ' << setw(12) << "wxyz"    << ' ' << setw(12) << "text" << ' ' 
	     << setw(12) << "label" << ' ' << setw(12) << "heading" << ' ' << endl << endl;

	cout << endl << fixed << setprecision(1) << setfill('*') << right;
	cout << setw(12) << value01 << ' ' << setw(12) << value02   << ' ' << setw(12) << value03 << ' ' 
	     << setw(12) << value04 << ' ' << setw(12) << value05   << ' ' <<endl;

	cout << endl;
	system("pause");
	return 0;
}

