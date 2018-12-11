// OperatorOverload-ShapeInheritanceSquare.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Square.h"

using namespace std;

int main()
{
	Circle		circle01;
	Circle		circle02(0, 0, 5);
	Rect		rect01;
	Rect		rect02(0, 0, 10, 20);
	Square		square01;
	Square		square02(0, 0, 15);

	cout << endl;
	circle01 = circle02;		// assignment:  memberwise copy
	circle01.display();

	circle01 = circle01 * 4;	// overloaded * operator	
	circle01.display();
	circle02 = circle02 + 3;	// overloaded + operator
	circle02.display();

	cout << endl;
	rect01 = rect02;			// assignment:  memberwise copy
	
	if (rect01 == rect02)
		cout << endl << "rect01 and rect02 are equal" << endl << endl;
	
	rect01.display();
	rect01 = rect01 * 6;		// overloaded * operator
	rect01.display();
	rect02 = rect02 + 7;		// overloaded + operator
	rect02.display();

	if (rect01 != rect02)
		cout << endl << "rect01 and rect02 are NOT equal" << endl << endl;

	cout << endl;
	square01 = square02;		// assignment:  memberwise copy
	square01.display();

	square01 = square01 * 4;	// overloaded * operator
	square01.display();
	square02 = square02 + 11;	// overloaded + operator
	square02.display();

	cout << endl;
	system("pause");
	return 0;
}
