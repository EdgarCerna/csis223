// ArrayParameter.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int		findLowest(int arr[], int num);			// find  lowest value in array passed as parameter
int		findHighest(int arr[], int num);		// find highest value in array passed as parameter

int main()
{
	ifstream	unorderedData;

	int		searchArray[1200];
	int		intInput;
	int		cnt = 0;
	int		lowest;
	int		highest;

	unorderedData.open("IntegerListRandom.txt");
	if (!unorderedData)
	{
		cout << endl << "Input file not found." << endl << endl;
		system("pause");
		return -1;
	}

	unorderedData >> intInput;
	while (!unorderedData.eof())
	{
		searchArray[cnt] = intInput;
		cnt++;
		unorderedData >> intInput;
	}
	unorderedData.close();
	cout << endl << ' ' << cnt << "  values loaded into array." << endl << endl;

	lowest  =  findLowest(searchArray, cnt);	//  lowest value in array returned
	highest = findHighest(searchArray, cnt);	// highest value in array returned

	cout << "  lowest value is " << lowest << endl;
	cout << " highest value is " << highest << endl;

	cout << endl;
	system("pause");
	return 0;
}

int		findLowest(int arr[], int num)			// find  lowest value in array passed as parameter
{
	int low;

	low = arr[0];								// set low to first value
	for (int i = 1; i < num; i++)				// compare rest of values in array
	{
		if (arr[i] < low)						// if array element is lower than low
			low = arr[i];						//    assign array element to low
	}
	return low;									// return low value
}

int		findHighest(int arr[], int num)			// find highest value in array passed as parameter
{
	int high;

	high = arr[0];								// set high to first value
	for (int i = 1; i < num; i++)				// compare rest of values in array
	{
		if (arr[i] > high)						// if array element is higher than high
			high = arr[i];						//    assign array element to high
	}
	return high;								// return high value
}
