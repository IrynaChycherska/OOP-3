//Source.cpp
#define _CRT_SECURE_NO_WARNINGS
#include "Point.h"
#include"Point_public.h"
#include"Point_private.h"
#include <iostream>
using namespace std;
int main()
{
    Point_private x, y;
    cout << "\n" << endl;
    cin >> x;
    cout << x;
	cin >> y;
	cout << y <<endl;
	Point a(3, 4);
	cout << "X = " << a.GetX() << endl;
	cout << "Y = " << a.GetY() << endl;
	cout << "Vidstan(c) = " << a.Vidstan() << endl << endl;
	char s[100];
	strcpy(s, a.VidstanToNumeral());
	cout << s << endl << endl;
    cout << "++x" << endl; cout << ++x << endl;
    cout << "--x" << endl; cout << --x << endl;
	cout << "x++" << endl; cout << x++ << endl;
	cout << "x--" << endl; cout << x-- << endl;
	cin.get();
	return 0;
}
