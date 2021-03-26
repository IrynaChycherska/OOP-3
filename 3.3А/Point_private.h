//Point_private.h
#pragma once
#include "Point.h"
#include <iostream>
using namespace std;
class Point_private :
    private Point
{
public:
	using Point::GetX;
	using Point::GetY;
	using Point::SetX;
	using Point::SetY;
	using Point::Point;
	Point_private();
	Point_private(double, double); // конструктор ініціалізації
	Point_private(Point_private&); // конструктор копіювання
	operator string() const;
	Point_private& operator ++();
	Point_private& operator --();
	Point_private operator ++(int);
	Point_private operator --(int);
	friend ostream& operator <<(ostream&, const  Point_private&);
	friend istream& operator >>(istream&, Point_private&);
};

