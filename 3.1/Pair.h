//Pair.h
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Pair
{
private:
	double a, b;
public:
	double getA() const { return a; }
	void setA(const double value) { a = value; }
	double getB() const { return b; }
	void setB(const double value) { b = value; }
	double dobutok()
	{
		return a * b;
	}
	void Init(double a1, double b1)
	{
		a = a1;
		b = b1;
	}
	void Display();
	void Read();
	Pair();
	Pair(double, double);
	Pair(Pair& m);
	~Pair(void);
	operator string ()const;
	friend ostream& operator << (ostream& out, const Pair& m);
	friend istream& operator >> (istream& in, Pair& m);
};

