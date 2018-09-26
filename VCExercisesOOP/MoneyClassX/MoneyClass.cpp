// MoneyClass.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
	Money	val[6];
	Money	amt01;
	Money	amt02(14);
	Money	amt03(119, 3);
	Money	amt04(1034.52);
	Money  *ptrAmt;
	Money  *ptrVal;

	val[1].setCents(42);

	val[2].setDollars(264);

	val[3].setDollars(5);
	val[3].setCents(17);

	val[4].setAmount(93.57);

	val[5].setAmount(199.0);

	cout << endl;

	for (int i = 0; i < 6; i++)
	{
		val[i].displayAmount();
	}
	cout << endl;

	amt01.displayAmount();
	amt02.displayAmount();
	amt03.displayAmount();
	amt04.displayAmount();
	
	ptrAmt = new Money(6, 78);
	ptrAmt->displayAmount();

	ptrVal = new Money(741.98);
	ptrVal->displayAmount();

	cout << endl;
	system("pause");
	return 0;
}
