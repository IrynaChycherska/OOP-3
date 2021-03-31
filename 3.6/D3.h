//D3.h
#pragma once
#include "D1.h"
#include"D2.h"
class D3 :public D1, public D2
{
	int d3;
public:
	D3(int x, int y, int z, int j, int e);
	void show_D3();
};

