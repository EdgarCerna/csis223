// Sort-STLVector.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ifstream	unorderedData;
	ofstream	orderedData;

	vector<int>	sortVector;						// declare vector class with integer type
	int		intInput;
	int		cnt = 0;
	int		pos = 0;

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
		sortVector.push_back(intInput);
		cnt++;
		unorderedData >> intInput;
	}
	unorderedData.close();
	cout << endl << ' ' << cnt << "  values loaded into array." << endl << endl;

	sort(sortVector.begin(), sortVector.end());	// sort vector class object

	orderedData.open("IntegerListSorted.txt");
	while (pos < cnt)
	{
		orderedData << setw(5) << sortVector[pos] << endl;
		pos++;
	}
	orderedData.close();
	cout << endl << ' ' << pos << "  values sorted to output." << endl << endl;

	cout << endl;
	system("pause");
	return 0;
}