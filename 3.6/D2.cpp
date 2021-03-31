//D2.cpp
#include "D2.h"
D2::D2()
	: d2(0)
{ }
D2::D2(int x)
{
	d2 = x;
}
void D2::show_D2()
{
	cout << "classD2 :" << endl;
	cout << "show_D2()" << endl
		<< "D2::d2 = " << d2 << endl << endl;
}