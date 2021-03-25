//Source.cpp
#include"Rectangle.h"
#include"Pair.h"
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
	Rectangle c;
	c.Read();
	cout << "p(s) = " << c.p() << endl;
	cout << "s(s) = " << c.s() << endl;
	cin.get();
	return 0;
}