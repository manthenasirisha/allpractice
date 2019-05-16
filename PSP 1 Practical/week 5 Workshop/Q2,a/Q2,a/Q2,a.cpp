// Q2,a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	float f = 1;

	for (int n = 6; n >= 1; n--)
		f = f * n;
	cout << f << endl;
	return 0;
}
