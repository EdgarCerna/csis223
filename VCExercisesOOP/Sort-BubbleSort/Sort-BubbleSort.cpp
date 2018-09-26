// Sort-BubbleSort.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	ifstream	unorderedData;
	ofstream	orderedData;

	int		sortArray[1000];
	int		intInput;
	int		cnt = 0;
	int		pos = 0;
	bool	swapped;

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

	for (int i = 0; i < cnt - 1; i++)
	{
		swapped = false;

		for (int j = 0; j < cnt - 1 - i; j++)
		{
			if (sortArray[j] > sortArray[j + 1])		// compare value with next value
			{
				int	hold;

				hold = sortArray[j];
				sortArray[j] = sortArray[j + 1];		//    swap if value higher than next value
				sortArray[j + 1] = hold;
				swapped = true;							// set swapped flag true
			}
		}
		if (!swapped)		// if no swaps on this inner loop pass
			break;			//    break out of loop - array is sorted
	}

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

