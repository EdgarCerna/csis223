#pragma once
#include "Shape.h"

class Circle: public Shape
{
  public:
	Circle();
	Circle(int newX, int newY, int newRadius);
	int  getRadius();
	void setRadius(int newRadius);
	void display();

	bool    operator==(const	Circle&)  const;    // overloaded equality   operator ==
	bool    operator!=(const	Circle&)  const;    // overloaded inequality operator !=
	Circle  operator*(int	factor);				// overloaded multiply   operator *
	Circle  operator+(int	increment);				// overloaded addition   operator +

  private:
	int  radius;
};


