// Part3.Q2a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int value = 0;

	for (int i = 1; i <= 99; i = i + 2) {

		value = value + i;
		cout << value << endl;

	}

	cout << value << endl;

	return 0;
}

