#pragma once

class Shape
{
  public:
	Shape();
	Shape(int newX, int newY);
	int	 getX();
	int   getY();
	void  setX(int newX);
	void  setY(int newY);
	void  moveTo(int newX, int newY);
	void  rMoveTo(int deltaX, int deltaY);
	virtual void display();

  private:
	int   x;
	int   y;
};


