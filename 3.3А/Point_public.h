//Point_public.h
#pragma once
#include "Point.h"
#include <cmath>
class Point_public :public Point
{
public:
	Point_public();
	Point_public(double, double); // конструктор ініціалізації
	Point_public(Point_public&); // конструктор копіювання
	operator string() const;
	Point_public& operator ++();
	Point_public& operator --();
	Point_public operator ++(int);
	Point_public operator --(int);
	friend ostream& operator <<(ostream&, const  Point_public&);
	friend istream& operator >>(istream&, Point_public&);
};