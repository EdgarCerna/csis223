#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

class Square
{
public:
	Square()
	{
		sideLength = 1;
		perimeter = 4;
		area = 1;
	}
	Square(double side)
	{
		sideLength = side;
		calculateSquareValues();
	}
	void setSideLength(double side)
	{
		sideLength = side;
		calculateSquareValues();
	}
	double getSideLength()
	{
		return sideLength;
	}
	double getPerimeter()
	{
		return perimeter;
	}
	double getArea()
	{
		return area;
	}
	void displaySquareInfo()
	{
		cout << endl << fixed << setprecision(3);
		cout << "Square values:  " 
			<< setw(8) << getSideLength() << "   " 
			<< setw(8) << getPerimeter() << "   " 
			<< setw(8) << getArea() << endl;
	}
private:
	void calculateSquareValues()
	{
		perimeter = 4 * sideLength;
		area = sideLength * sideLength;
	}

	double sideLength;
	double perimeter;
	double area;
};

int main()
{
	Square	thisSquare(3.95);		//declare instance of Square class (parameter constructor)
	Square	thatSquare;				//declare Square instance with defaunt constructor without ()
	Square*	ptr1Square;				//declare pointer to Square class
	Square* ptr2Square;				//declare pointer to Square class
	Square* ptr3Square;				//declare pointer to Square class
	
	thisSquare.displaySquareInfo();

	thatSquare.displaySquareInfo();

	thatSquare = thisSquare;
	thatSquare.displaySquareInfo();

	thisSquare.setSideLength(6.0);
	thisSquare.displaySquareInfo();

	ptr1Square = &thatSquare;
	ptr1Square->displaySquareInfo();

	ptr2Square = new Square;
	ptr2Square->displaySquareInfo();

	ptr3Square = new Square(8.0);
	ptr3Square->displaySquareInfo();

	cout << endl;
	system("pause");
	return 1;
}