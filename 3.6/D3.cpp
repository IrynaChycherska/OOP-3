//D3.cppp
#include "D3.h"
#include "D1.h"
#include"D2.h"
D3::D3(int x, int y, int z, int j, int e)
	:D1(y,z,j), D2(j)
{
	d3 = x;
}
void D3::show_D3()
{
	cout << "class D3:" << endl;
	show_D1();
	show_D2();
	cout << "show_D3()" << endl
		<< "D3::d3 = " << d3 << endl << endl;
}