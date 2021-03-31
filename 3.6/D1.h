//D1.h
#pragma once
#include "B1.h"
#include"B2.h"
class D1 : public B1, public B2
{
	int d1;
public:
	D1(int x, int y, int z);
	void show_D1();
};

