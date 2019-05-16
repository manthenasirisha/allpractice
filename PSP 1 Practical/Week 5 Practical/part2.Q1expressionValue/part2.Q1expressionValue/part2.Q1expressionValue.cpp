// part2.Q1expressionValue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n, value = 0;

	cout << " Enter n value : ";
	cin >> n;

	for (int i = 1; i <= n; i++) {

		value = value + i * (i + 1);

	}

	cout << value << endl;
	return 0;
}

