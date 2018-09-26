// ExceptionErrorCode.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int		score;

	cout << fixed << endl;
	cout << endl << " Enter score [1-100]:  ";
	cin  >> score;
	cout << endl << endl;

	try
	{
		if (score < 0)
			throw -1;
		if (score == 0)
			throw  0;
		if (score > 100)
			throw  1;

		cout << "   Accepted score is:  " << score; 
	}
	catch (int  err)
	{
      string   problem;

      switch (err)
      {
      case -1: 
         problem = "too low";
         break;
      case  0:
         problem = "zero";
         break;
      case  1:
         problem = "too high";
         break;
      }
		cout << " Invalid score.  Value is " << problem << ".";
	}

	cout << endl << endl << endl;
	system("pause");
	return 0;
}