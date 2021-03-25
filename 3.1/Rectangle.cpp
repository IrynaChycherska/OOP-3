//Rectangle.cpp
#include "Rectangle.h"
#include <sstream>
Rectangle::Rectangle(double x, double y)
{
	double a = x;
	double b = y;
	setA(a);
	setB(b);
}
Rectangle::Rectangle(Rectangle& m)
{
	double a = m.getA();
	double b = m.getB();
	setA(a);
	setB(b);
}
Rectangle::~Rectangle(void)
{}
void Rectangle::Init(double a, double b)
{
	setA(a);
	setB(b);
}
void Rectangle::Display()
{
	cout << endl;
	cout << "a = " << getA() << endl;
	cout << "b = " << getB() << endl;
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
string format(int b)
{
	stringstream ss;
	ss <<b;
		return ss.str();
}
Rectangle::operator string() const
{
	stringstream ss;
	ss << getA() << "," << format(getB());
	return ss.str();
}
ostream& operator << (ostream& out, const Rectangle& m)
{
	return out << (string)m;
}
istream& operator >> (istream& in, Rectangle& m)
{
	int a, b;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;
	m.setA(a); m.setB(b);
	return in;
}
