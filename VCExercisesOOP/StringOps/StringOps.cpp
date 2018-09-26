// StringOps.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string	fName		= "James";
	string	mi			= "L.";
	string	lName		= "Northington";
	string	nameBuild;
	string	nameStr		= "Williamson, Harold M.";
	string  fieldLabel	= "Computer Science";

	int		pos;

	cout << endl;

	nameBuild.append(fName);
	nameBuild.append(" ");
	nameBuild.append(mi);
	nameBuild.append(" " );
	nameBuild.append(lName);
	cout << nameBuild << endl << endl;              // name built up by .append() function

	nameBuild.erase();                              // delete all characters from string (same as .clear() member function)

	nameBuild = fName + " " + mi + " " + lName;     // name built through concatenation -- overloaded + operator
	cout << nameBuild << endl << endl;

	nameBuild.clear();								// delete all characters from string (same as .erase() member function)
	
	pos = nameStr.find(",");						// find position of first comma in string
	nameBuild = nameStr.substr(pos + 2, 100);       // assign substring from character after comma to end of string
	nameBuild.append(" ");									// append space after first name
	nameBuild.append(nameStr.substr(0, pos));       // append last name (substring from start of string to position of comma)
	cout << nameBuild << endl << endl;

	nameBuild = "";                                 // also erases string (assigns null string) 
 
	cout << fieldLabel.length() << endl;            // length of fieldLabel
	pos = fieldLabel.find(" ");                     // find position of first space in string
	cout << pos << endl;
	cout << fieldLabel.substr(0, pos)   << "!" << endl;		// substring from first character (position 0) to position of first space
	cout << fieldLabel.substr(pos + 1, 100) << "#" << endl;	// substring from position after first space to end of string

	cout << endl << endl;
	system("pause");
	return 0;
}

