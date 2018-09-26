// RecursiveReverse.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void getNextChar();

int main()
{
	// "A man, a plan, a canal, Panama."  "Madam, I'm Adam."

   cout << endl << "Enter input string ..." << endl << endl;
   
   getNextChar();          // call getNextChar() routine

   cout << endl;

   cout << endl;
   system("pause");
   return 0;
}

void  getNextChar()
{
   char  charHold;

   cin.get(charHold);
   if (charHold != '\n')
      getNextChar();       // recursively call getNextChar() routine

   if (isalnum(charHold))
      cout << charHold;
}
