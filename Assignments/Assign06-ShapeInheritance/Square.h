#pragma once
#include "Rect.h"

class Square: public Rect 
{
  public:
	Square();
	Square(int newX, int newY, int length);
	int		getSide();
	void	setSide(int  newlength);
	void	display();

	bool	operator==(const  Square&)  const;	// overloaded equality   operator ==
	bool	operator!=(const  Square&)  const;	// overloaded inequality operator !=
	Square	operator*(int	factor);			// overloaded multiply   operator *
	Square	operator+(int	increment);			// overloaded addition   operator +

  private:
	int		side;
};