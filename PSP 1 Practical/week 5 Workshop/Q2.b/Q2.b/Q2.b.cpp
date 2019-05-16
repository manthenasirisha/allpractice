// Q2.b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int x = 2, y = 13;
	while (x < y) {
		x = x + 2;
		y = y - 2;
	}
	cout << x << endl << y << endl;
	return 0;
}


