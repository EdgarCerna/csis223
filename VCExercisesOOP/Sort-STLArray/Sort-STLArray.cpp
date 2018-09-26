// Sort-STLArray.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
	ifstream	unorderedData;
	ofstream	orderedData;

	array<int, 1000>	sortArray;				// declare array class with 1000 elements
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
		sortArray[cnt] = intInput;
		cnt++;
		unorderedData >> intInput;
	}
	unorderedData.close();
	cout << endl << ' ' << cnt << "  values loaded into array." << endl << endl;

	sort(sortArray.begin(), sortArray.end());	// sort array class

	orderedData.open("IntegerListSorted.txt");
	while (pos < cnt)
	{
		orderedData << setw(5) << sortArray[pos] << endl;
		pos++;
	}
	orderedData.close();
	cout << endl << ' ' << pos << "  values sorted to output." << endl << endl;

	cout << endl;
	system("pause");
	return 0;
}
