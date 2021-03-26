//Point.h
#include <iostream>
#include <string>
#pragma once
using namespace std;
class Point
{
private:
	double x;
	double y;
public:
	double GetX() const { return x; }
	double GetY() const { return y; }
	double Vidstan()
	{
		return sqrt(x * x + y * y);
	}
	void SetX(double value) { x = value; }
	void SetY(double value) { y = value; }
	Point();
	Point(double, double); // ����������� �����������
	Point(const Point&); // ����������� ���������
	const char* VidstanToNumeral();
};