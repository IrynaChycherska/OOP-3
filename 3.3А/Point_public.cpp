//Point_public.cpp
#include "Point_public.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <sstream>
using namespace std;
Point_public::Point_public()
	: Point(0,0)
{}
Point_public::Point_public(double z = 0, double m = 0)
	:Point(z,m)
{}
Point_public::Point_public(Point_public& t)
	:Point(t.GetX(), t.GetY())
{}
Point_public::operator string() const
{
	stringstream ss;
	ss << " X = " << this->GetX() << endl;
	ss << " Y = " << this->GetY();
	return ss.str();
}
ostream& operator <<(ostream& out, const Point_public& a)
{
	out << string(a) << endl;
	return out;
}
istream& operator >>(istream& in, Point_public& a)
{
	double x, y;
	cout << "X: "; in >> x;
	cout << "Y: "; in >> y;
	a.SetX(x); 
	a.SetY(y);
	cout << endl;
	return in;
}
Point_public& Point_public::operator ++()
{
	this->SetX(this->GetX() + 1);
	return *this;
}
Point_public& Point_public::operator --()
{
	this->SetX(this->GetX() - 1);
	return *this;
}
Point_public Point_public::operator ++(int)
{
	Point_public t (*this);
	this->SetY(this->GetY() + 1);
	return t;
}
Point_public Point_public::operator --(int)
{
	Point_public t(*this);
	this->SetY(this->GetY() - 1);
	return t;
}