// SimpleStack.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

class stackType
{
public:
	stackType(int num = 20);	// default size = 20
	~stackType();
	void	push(int item);
	int		pop();
	int		peek();
private:
	int    *stack;
	int		stackSize;
	int		top = -1;
};

stackType::stackType(int num)
{
	stack = new int [num];
	stackSize = num;
}

stackType::~stackType()
{
	delete [] stack;
	stack = NULL;
}

void	stackType::push(int item)
{
	stack[++top] = item;
}

int		stackType::pop()
{
	return stack[top--];
}

int		stackType::peek()
{
	return stack[top];
}

int main()
{
	stackType	newStack;

	newStack.push(457);
	newStack.push(-1);
	newStack.push(2387);
	newStack.push(73);
	newStack.push(19);
	newStack.push(699);
	newStack.push(4);

	cout << endl << setw(8) << newStack.pop();
	cout << endl << setw(8) << newStack.pop();
	cout << endl << setw(8) << newStack.pop();
	cout << endl << setw(8) << newStack.pop();
	cout << endl << setw(8) << newStack.pop();
	cout << endl << setw(8) << newStack.pop();
	cout << endl << setw(8) << newStack.pop();

	cout << endl << endl;
	system("pause");
	return 0;
}
