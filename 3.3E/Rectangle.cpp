//Rectangle.cpp
#include "Rectangle.h"
#include"Pair.h"
#include <iostream>
#include <sstream>
using namespace std;
void Rectangle::Init(double a, double b)
{
	Pair::Init(a, b);
}
void Rectangle::Display()
{
	cout << endl;
	cout << "a = " << endl;
	cout << "b = " << endl;
	Pair::Display();
}
void  Rectangle::Read()
{
	double n;
	double m;
	cout << endl;
	cout << "b = ? "; cin >> n;
	cout << "a = ? "; cin >> m;
	Init(n, m);
}
Rectangle::Rectangle(double a, double b)
	:Pair(a, b)
{}
Rectangle::Rectangle(Rectangle& m)
	: Pair(m)
{}
Rectangle& Rectangle::operator = (Rectangle& m)
{
	Pair::operator=(m);
	return *this;
}
ostream& operator << (ostream& out, const Rectangle& m)
{
	out << string(m);
	return out;
}
istream& operator >> (istream& in, Rectangle& m)
{
	double a;
	double b;
	cout << endl;
	cout << "a = ? "; in >> a;
	cout << "b = ? "; in >> b;
	m.setA(a); m.setB(b);
	return in;
}
Rectangle::operator string ()const
{
	return Pair::operator std::string();
}
Rectangle::~Rectangle(void)
{}
double Rectangle::p()
{
	double a;
	double b;
	cout << endl;
	cout << "a = ? "; cin >> a;
	cout << "b = ? "; cin >> b;
	Init(a, b);
	double p = 2 * (a + b);
	return p;
}
double Rectangle::s()
{
	double a;
	double b;
	cout << endl;
	cout << "a = ? "; cin >> a;
	cout << "b = ? "; cin >> b;
	Init(a, b);
	double s = a * b;
	return s;
}