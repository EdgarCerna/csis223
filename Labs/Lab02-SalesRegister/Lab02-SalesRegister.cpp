#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

//CONSTANTS
const double MO_SALES_TAX_RATE = 0.04316;
const double KS_SALES_TAX_RATE = 0.068;

//FUNCTION PROTOTYPES
double saleAmountCalc(int qty, double price);
double salesTaxCalc(double saleAmt, string stateCode);
void displaySaleData(string customerName, double saleAmt, double salesTax, string stateCode);

int main()
{
	string customerName, stateCode;
	int qty;
	double price;
	double saleAmt, salesTax;
	double totalAmt = 0;
	double totalTax = 0;
	double totalMOTax = 0;
	double totalKSTax = 0;
	ifstream inputFile;

	inputFile.open("SalesRegister.txt");
	if (!inputFile)
	{
		cout << endl << "File SalesRegister.txt not found, recheck directory." << endl;
		system("pause");
		return -1;
	}

	inputFile >> customerName;
	while (!inputFile.eof())
	{
		inputFile >> stateCode >> qty >> price;

		saleAmt = saleAmountCalc(qty, price);
		salesTax = salesTaxCalc(saleAmt, stateCode);
		displaySaleData(customerName, saleAmt, salesTax, stateCode);

		totalAmt += saleAmt;
		totalTax += salesTax;
		if (stateCode == "KS")
		{
			totalKSTax += salesTax;
		}
		else
		{
			totalMOTax += salesTax;
		}

		inputFile >> customerName;
	}

	cout << "\n\n" << setw(17) << right << "$ " << setw(8) << right << totalAmt << "  $ " << setw(6) << totalTax << setw(3) << stateCode;
	cout << "\n\n" << setw(25) << "Sales Tax:" << setw(10) << totalMOTax << " MO";
	cout << endl << setw(35) << totalKSTax << " KS";

	cout << endl;
	system("pause");
	return 1;
}

double saleAmountCalc(int qty, double price)
{
	double saleAmt;

	saleAmt = qty * price;

	return saleAmt;
}

double salesTaxCalc(double saleAmt, string stateCode)
{
	double salesTax;

	
	if (stateCode == "KS")
	{
		salesTax = saleAmt * KS_SALES_TAX_RATE;
	}
	else
	{
		salesTax = saleAmt * MO_SALES_TAX_RATE;
	}

	return salesTax;
}

void displaySaleData(string customerName, double saleAmt, double salesTax, string stateCode)
{
	static char dollarSign = '$';

	cout << fixed << setprecision(2);
	cout << setw(15) << left << customerName << setw(2) << dollarSign << setw(8) << right << saleAmt << "  " << setw(2) << left << dollarSign << setw(7) << right << salesTax << "  " << stateCode << endl;

	dollarSign = ' ';
}