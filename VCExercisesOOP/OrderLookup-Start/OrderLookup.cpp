// OrderLookup.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int		orderID;							// Orders file fields
	string	custLast;
	string	custFirst;
	string	orderDate;
	string	productCode;
	int		orderQty;

	string	productID;							// Products file fields
	string	productDescription;
	double	productPrice;

	double	totalCost;							// Calculated and Hold fields
	double	itemCost;
	string	itemDescription;
	int		orderCount = 0;

	ifstream	orders;							// declare input file streams
	ifstream	products;





	cout << endl;
	system("pause");
	return 0;
}