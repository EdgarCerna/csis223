#pragma once
#include "Shape.h"

class Rect: public Shape 
{
  public:
	Rect();
	Rect(int newX, int newY, int newWidth, int newHeight);
	int  getWidth();
	int  getHeight();
	void setWidth(int  newWidth);
	void setHeight(int newHeight);
	void display();

	double getArea()		const;
	double getPerimeter()	const;

	bool  operator==(const  Rect&)  const;	// overloaded equality   operator ==
	bool  operator!=(const  Rect&)  const;	// overloaded inequality operator !=
	Rect  operator*(int	factor);			// overloaded multiply   operator *
	Rect  operator+(int	increment);			// overloaded addition   operator +

  private:
	int  width;
	int  height;
};

