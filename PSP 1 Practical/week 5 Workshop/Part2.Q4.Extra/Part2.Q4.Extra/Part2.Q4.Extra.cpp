// Part2.Q4.Extra.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	int value = 1;

	for (int x = 0; x <= 6; x++) {
		cout << x << " " << value << endl;
		value = value * 2;
	}

	return 0;
}
