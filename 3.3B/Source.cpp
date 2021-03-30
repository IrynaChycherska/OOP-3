//Source.cpp
#include<iostream>
#include"Point.h"
int main()
{
	Point c(3,4);
	cout << "f = " << c.GetF() << endl;
	cout << "s = " << c.GetS() << endl << endl;
	Point a(3, 4);
	cout << "f = " << a.GetF() << endl;
	cout << "s = " << a.GetS() << endl;
	cout << "Vidstan(c) = " << a.Vidstan() << endl << endl;
	cout << "c++" << endl << c++ << endl;
	cout << "c--" << endl << c-- << endl;
	cout << "++c" << endl << ++c << endl;
	cout << "--c" << endl << --c << endl;
	cin.get();
	return 0;
}