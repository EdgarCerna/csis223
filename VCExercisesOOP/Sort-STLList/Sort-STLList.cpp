// Sort-STLList.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
	ifstream	unorderedData;
	ofstream	orderedData;

	list<int>	sortList;			// declare doubly-linked list
	list<int>::iterator	itr;		// declare list iterator
	int			intInput;
	int			cnt = 0;
	int			pos = 0;

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
		sortList.push_back(intInput);
		cnt++;
		unorderedData >> intInput;
	}
	unorderedData.close();
	cout << endl << ' ' << cnt << "  values loaded into array." << endl << endl;

	sortList.sort();				// sort doubly-linked list

	orderedData.open("IntegerListSorted.txt");
	itr = sortList.begin();
	while (itr != sortList.end())
	{
		orderedData << setw(5) << *itr++ << endl;
	}
	orderedData.close();
	cout << endl << ' ' << sortList.size() << "  values sorted to output." << endl << endl;

	cout << endl;
	system("pause");
	return 0;
}