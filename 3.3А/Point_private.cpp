//Point_private.cpp
#include "Point_private.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <sstream>
using namespace std;
Point_private::Point_private()
	: Point(0, 0)
{}
Point_private::Point_private(double z = 0, double m = 0)
	: Point(z, m)
{}
Point_private::Point_private(Point_private& t)
	: Point(t.GetX(), t.GetY())
{}
Point_private::operator string() const
{
	stringstream ss;
	ss << " X = " << this->GetX() << endl;
	ss << " Y = " << this->GetY();
	return ss.str();
}
ostream& operator <<(ostream& out, const Point_private& a)
{
	out << string(a) << endl;
	return out;
}
istream& operator >>(istream& in, Point_private& a)
{
	double x, y;
	cout << "X: "; in >> x;
	cout << "Y: "; in >> y;
	a.SetX(x);
	a.SetY(y);
	cout << endl;
	return in;
}
Point_private& Point_private::operator ++()
{
	this->SetX(this->GetX() + 1);
	return *this;
}
Point_private& Point_private::operator --()
{
	this->SetX(this->GetX() - 1);
	return *this;
}
Point_private Point_private::operator ++(int)
{
	Point_private t(*this);
	this->SetY(this->GetY() + 1);
	return t;
}
Point_private Point_private::operator --(int)
{

	Point_private t(*this);
	this->SetY(this->GetY() - 1);
	return t;
}