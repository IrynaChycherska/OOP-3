#include <iostream>
#include <Windows.h>
#include"B1.h"
#include"B2.h"
#include"D1.h"
#include"D2.h"
#include"D3.h"
#include"D4.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	B1 o0(77);
	cout << "B1 o0(77);" << endl;
	cout << "sizeof(B1) = " << sizeof(B1) << endl;
	cout << endl << "Ієрархія класу B1: " << endl;
	o0.show_B1();
	B2 o2(777);
	cout << "B2 o0(777);" << endl;
	cout << "sizeof(B2) = " << sizeof(B2) << endl;
	cout << endl << "Ієрархія класу B2: " << endl;
	o2.show_B2();
	D1 o1(111, 222, 333);
	cout << "D1 o1(111, 222,333);" << endl;
	cout << "sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << "Ієрархія класу D1: " << endl;
	o1.show_D1();
	D2 oD2(1000);
	cout << "D2 o2(1000);" << endl;
	cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << "Ієрархія класу D2: " << endl;
	oD2.show_D2();
	D3 o3(100, 200, 300, 400, 500);
	cout << "D3 o3(100, 200, 300, 400, 500);" << endl;
	cout << "sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl << "Ієрархія класу D3: " << endl;
	o3.show_D3();
	D4 o4(1, 2, 3, 4, 5,6);
	cout << "D4 o4(1, 2, 3, 4, 5, 6);" << endl;
	cout << "sizeof(D4) = " << sizeof(D4) << endl;
	cout << endl << "Ієрархія класу D4: " << endl;
	o4.show_D4();
	return 0;
}