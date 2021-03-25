//Pair.cpp
#include "Pair.h"
#include<iostream>
#include<sstream>
#include<cmath>
#include<string>
using namespace std;
void Pair::Read()
{
	double c, d;
	cout << endl;
	cout << "a = ? "; cin >> c;
	cout << "b = ? "; cin >> d;
	Init(c, d);
}
void Pair::Display()
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
Pair::Pair()
	: a(0), b(0)
{}

Pair::Pair(double x = 0, double y = 0)
	: a(x), b(y)
{}
Pair::Pair(Pair& m)
	: a(m.a), b(m.b)
{}
Pair::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "( " << getA() << ", " << getB() << " )";
	return ss.str();
}
ostream& operator <<(ostream& out, const Pair& m)
{
	out << string(m);
	return out;
}
istream& operator >>(istream& in, Pair& m)
{

	cout << endl;
	cout << ".a = ? "; in >> m.a;
	cout << ".b = ? "; in >> m.b;
	return in;
}
Pair::~Pair(void)
{}

