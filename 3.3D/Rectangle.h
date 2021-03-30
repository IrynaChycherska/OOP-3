//Rectangle.h
#pragma once
#include "Pair.h"
class Rectangle :public Pair
{
public:
	void Init(double a, double b);
	void Display();
	void Read();
	Rectangle(double a = 0., double b = 0.);
	Rectangle(Rectangle& m);
	~Rectangle(void);
	Rectangle& operator = (Rectangle& m);
	operator string ()const;
	friend ostream& operator << (ostream& out, const Rectangle& m);
	friend istream& operator >> (istream& in, Rectangle& m);
	double p();
	double s();
};

