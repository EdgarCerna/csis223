// ClassTemplateX.cpp : Defines the entry point for the console application.
//
//This program shows how to use the class template listType.
#include "StdAfx.h"
#include <iostream>
#include "myString.h"
#include "listType.h"
 
using namespace std;

int main()
{
    listType<int> intList(100);                     //Line 1
    listType<newString> stringList;                 //Line 2

    int index;                                      //Line 3
    int number;                                     //Line 4

	cout << endl;
    cout << "List template:   Processing integer list . . ." << endl;
    cout << "List template:   Enter 5 integers: ";  //Line 6
                                 
    for (index = 0; index < 5; index++)             //Line 7
    {    
        cin >> number;                              //Line 8
        intList.insertAt(number, index);            //Line 9
    }

    cout << endl;                                   //Line 10
    cout << "List template:            intList: ";  //Line 11
    intList.print();                                //Line 12
    cout << endl;                                   //Line 13

    //Sort intList
    intList.sort();                                 //Line 14

    cout << "List template:      After sorting: ";
    intList.print();                                //Line 16
    cout << endl << endl;                           //Line 17

    newString str;                                  //Line 18

    cout << "List template:   Processing string list . . ." << endl;

    cout << "List template:   Enter 5  strings: ";  //Line 20

    for (index = 0; index < 5; index++)             //Line 21
    {
        cin >> str;                                 //Line 22
        stringList.insertAt(str, index);            //Line 23
    }

    cout << endl;                                   //Line 24
    cout << "List template:         stringList: ";  //Line 25
    stringList.print();                             //Line 26
    cout << endl;                                   //Line 27

    //Sort stringList
    stringList.sort();                              //Line 28

    cout << "List template:      After sorting: ";
    stringList.print();                             //Line 30
    cout << endl << endl;                           //Line 31
    
    int intListSize;                                //Line 32

    cout << "List template:   Enter size of integer list: ";
    cin >> intListSize;                             //Line 34
    cout << endl;                                   //Line 35
   
    listType<int> intList2(intListSize);            //Line 36

    cout << "List template:   Processing integer list . . ."
         << endl;                                   //Line 37
    cout << "List template:   Enter " << intListSize << " integers: ";

    for (index = 0; index < intListSize; index++)   //Line 39
    {
        cin >> number;                              //Line 40
        intList2.insertAt(number, index);           //Line 41
    }

    cout << endl;                                   //Line 42

    cout << "List template:           intList2: ";  //Line 43
    intList2.print();                               //Line 44
    cout << endl;                                   //Line 45
 
    //Sort intList2
    intList2.sort();                                //Line 46

    cout << "List template:      After sorting: ";
    intList2.print();                               //Line 48
    cout << endl;                                   //Line 49

    cout << "List template: Length of intList2: "
         << intList2.getLength() << endl;           //Line 50
    cout << "List template:   Size of intList2: "
         << intList2.getMaxSize() << endl;          //Line 51

	cout << endl << endl;
	system("pause");
    return 0;
}
