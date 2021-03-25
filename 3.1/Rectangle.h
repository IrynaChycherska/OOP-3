//Rectangle.h
#pragma once
#include "Pair.h"
class Rectangle :
    public Pair
{
public:
    Rectangle(double x = 0, double y = 0);
    Rectangle(Rectangle& m);
    ~Rectangle(void);
	double p()
	{
		double a = getA();
		double b = getB();
		return 2 * (a + b);
	}
	double s()
	{
		double a = getA();
		double b = getB();
		return a * b;
	}
	void Init(double a, double b);
	void Display();
	void Read();
    operator string() const;
    friend ostream& operator << (ostream& out, const Rectangle& m);
    friend istream& operator >> (istream& in, Rectangle& m);
};