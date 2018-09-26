// OrderLookup-NoLookup.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// Orders file fields
	int		orderID;
	string	custLast;
	string	custFirst;
	string	orderDate;
	string	productCode;
	int		orderQty;
	// Products file fields
	string	productID;
	string	productDescription;
	double	productPrice;
	// Calculated and Hold fields
	double	totalCost;
	double	itemCost;
	string	itemDescription;
	int		orderCount = 0;
	// Input File stream objects
	ifstream	orders;								// declare input file streams
	ifstream	products;

	orders.open("Orders.txt");						// open Orders   file
	products.open("Products.txt");					// open Products file

	if (!orders || !products)
	{
		cout << endl << "Error opening input file." << endl;
		system("pause");
		return -1;
	}

	products.close();								// close file after initial input stream check

	cout << fixed << setprecision(2);				// initialize stream for numeric output

	orders >> orderID;                                                               // input first field of first record

	while (!orders.eof())
	{
		orders >> custLast >> custFirst >> orderDate >> productCode >> orderQty;      // input remaining fields in record

		itemCost = 0.0;								// initialize cost before price  lookup
		itemDescription.clear();					// clear description before item lookup

		// file lookup goes here

		totalCost = itemCost * orderQty;

		cout << endl << orderID << "  " << orderDate << "  ";
		cout << setw(20) << left << itemDescription;
		cout << setw(6) << right << orderQty << " @  $ " << setw(6) << itemCost;
		cout << "   $" << setw(8) << totalCost << "  " << custLast;

		orderCount++;

		orders >> orderID;                                                         // input first field of next record
	}

	orders.close();

	cout << endl << endl << setw(3) << orderCount << "  orders processed" << endl;

	cout << endl;
	system("pause");
	return 0;
}

