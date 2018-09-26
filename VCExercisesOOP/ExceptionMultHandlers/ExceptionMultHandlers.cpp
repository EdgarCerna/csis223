// ExceptionMultHandlers.cpp : Defines the entry point for the console application.
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
			throw score;            // integer variable thrown
		if (score == 0)
			throw string("zero");   // anonymous string object thrown
		if (score > 200)
			throw 3.14;             // float value thrown
		if (score > 100)
			throw 'H';              // char  value thrown

		cout << "   Accepted score is:  " << score; 
	}
	catch (int  lowVal)           // catch integer value
	{
  		cout << " Invalid score.  Value " << lowVal << " is too low.";
	}
	catch (string val)            // catch string object
	{
 		cout << " Invalid score.  Value is " << val << ".";
	}
	catch (char x)                // catch char  object
	{
 		cout << " Invalid score.  Value is too high.";
	}
	catch (...)                   // catch-all exception handler
	{
		cout << " Invalid score.  Value is out of range.";
	}

	cout << endl << endl << endl;
	system("pause");
	return 0;
}

