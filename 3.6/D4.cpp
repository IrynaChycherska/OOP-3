#include "D4.h"
#include"D3.h"
D4::D4(int x, int y, int z, int j, int e, int i)
	:D3(y, z, j, e, i)
{
	d4 = x;
}
void D4::show_D4()
{
	cout << "class D4:" << endl;
	show_D3();
	cout << "show_D4()" << endl
		<< "D4::d4 = " << d4 << endl << endl;
}