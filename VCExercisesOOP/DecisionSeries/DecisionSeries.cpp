// DecisionSeries.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const	float	PRODUCT_PRICE      = 24.95;
	const	float	SHIPPING_HANDLING  =  6.95;
	const	float	CARRY_CASE_PRICE   =  4.95;
	const	float	SALES_TAX_RATE     =  0.0935;
	const	float	EXPRESS_CHARGE     =  5.25;
	const	float	WARRANTY_EXTENSION =  7.35;

	float	orderAmount;
	char	carryCase;
	char	residentMO;
	char	expressDelivery;
	char	extendWarranty;

	orderAmount = PRODUCT_PRICE + SHIPPING_HANDLING;
	
   cout << endl << "Product Price + Shipping:  $" << fixed << setprecision(2) << orderAmount;
   cout << endl;
	
   cout << endl << endl << "Add Carrying Case  - Y/N?  ";
	cin  >> carryCase;
	cout << endl << endl << "Missouri Resident  - Y/N?  ";
	cin  >> residentMO;
	cout << endl << endl << "Express  Delivery  - Y/N?  ";
	cin  >> expressDelivery;
	cout << endl << endl << "Extended Warranty  - Y/N?  ";
	cin  >> extendWarranty;

	if (carryCase == 'Y' || carryCase == 'y')
		orderAmount += CARRY_CASE_PRICE;

	if (residentMO == 'Y' || residentMO == 'y')
		orderAmount += (orderAmount * SALES_TAX_RATE);

	if (expressDelivery == 'Y' || expressDelivery == 'y')
		orderAmount += EXPRESS_CHARGE;

	if (extendWarranty == 'Y' || extendWarranty == 'y')
		orderAmount += WARRANTY_EXTENSION;

	cout << endl << endl;
	cout << endl << "   Total amount of order:  $" << fixed << setprecision(2) << orderAmount;
   cout << endl << endl;

	cout << endl;
	system("pause");
	return 0;
}

