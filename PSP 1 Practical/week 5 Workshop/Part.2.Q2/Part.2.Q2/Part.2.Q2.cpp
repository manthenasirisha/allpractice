// Part.2.Q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	float i, value = 0; int n;

	cout << " Enter n value ";
	cin >> n;
	for (i = 1; i <= n; i++) {

		value = value + 1.0 / i;
	}

	cout << value;
	return 0;
}

