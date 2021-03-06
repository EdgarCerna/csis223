#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string last, first;
	char transCode;
	double price;
	int qty;

	double orderTotal;
	double allTotal = 0;
	int orderCnt = 0;
	char dollarSign = '$';
	ifstream salesRec;

	salesRec.open("SalesReceipts.txt");
	if (!salesRec)
	{
		cout << endl << "Could not find file  SalesReceipts.txt  please check file directory" << endl;
		system("pause");
		return -1;
	}

	salesRec >> last;
	while (!salesRec.eof())
	{
		salesRec >> first >> transCode >> price >> qty;

		orderTotal = price * qty;
		allTotal += orderTotal;
		orderCnt++;
		
		cout << fixed << setprecision(2) << left << setw(2) << transCode << right << setw(5) << qty << setw(3) << '@' << setw(3) << dollarSign << setw(10) << price << setw(3) << dollarSign << setw(10) << orderTotal << "    " << last << ", " << first << endl;
		dollarSign = ' ';

		salesRec >> last;
	}
	salesRec.close();

	cout << endl << right << setw(30) << "$ " << allTotal << endl;
	cout << endl << right << setw(7) << orderCnt << "  records processed" << endl;


	cout << endl;
	system("pause");
	//cin.get();
	return 0;
}