//Source.cpp
#include "Rectangle.h"
#include<iostream>
using namespace std;
int main()
{
	Pair z;
	z.Init(3, 4);
	z.Display();
	cout << "change:" << endl;
	z.setA(5);
	z.setB(6);
	z.Display();
	cout << "dobutok(z) = " << z.dobutok() << endl << endl;
	cout << "++z : " << ++z << endl;
	cout << "--z : " << --z << endl;
	cout << "z++ : " << z++ << endl;
	cout << "z-- : " << z-- << endl;
	Rectangle s;
	cout << "p(s) = " << s.p() << endl;
	cout << "s(s) = " << s.s() << endl;
	cin.get();
	return 0;
}