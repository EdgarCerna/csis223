// SimpleStack.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

template <class Type>
class stackType
{
public:
	stackType(int num = 20);
	~stackType();
	void	push(Type item);
	Type	pop();
	Type	peek();
private:
	int		size;
	Type   *stack;			// pointer to stack array of Type
	int		top = -1;
};

template <class Type>
stackType<Type>::stackType(int num)
{
	stack = new Type [num];	// stack points to new array of Type
	size = num;
}

template <class Type>
stackType<Type>::~stackType()
{
	delete [] stack;		// delete pointer to stackType
	stack = NULL;			// avoid dangling pointer
}

template <class Type>
void	stackType<Type>::push(Type item)
{
	stack[++top] = item;
}

template <class Type>
Type	stackType<Type>::pop()
{
	return stack[top--];
}

template <class Type>
Type	stackType<Type>::peek()
{
	return stack[top];
}

int main()
{
	stackType<int> intStack(10);		// declare integer stack - size = 10

	intStack.push(457);
	intStack.push(-1);
	intStack.push(2387);
	intStack.push(73);
	intStack.push(19);
	intStack.push(699);
	intStack.push(4);

	cout << endl << setw(8) << intStack.pop();
	cout << endl << setw(8) << intStack.pop();
	cout << endl << setw(8) << intStack.pop();
	cout << endl << setw(8) << intStack.pop();
	cout << endl << setw(8) << intStack.pop();
	cout << endl << setw(8) << intStack.pop();
	cout << endl << setw(8) << intStack.pop();
	
	cout << endl;

	stackType<string> strStack(30);		// declare string stack  - size = 30

	strStack.push("abcdefgh");
	strStack.push("klmnopqr");
	strStack.push("stuvwxyz");
	strStack.push("this");
	strStack.push("that");
	strStack.push("the other");
	strStack.push("yet another");

	cout << endl << strStack.pop();
	cout << endl << strStack.pop();
	cout << endl << strStack.pop();
	cout << endl << strStack.pop();
	cout << endl << strStack.pop();
	cout << endl << strStack.pop();
	cout << endl << strStack.pop();

	cout << endl << endl;
	system("pause");
	return 0;
}
