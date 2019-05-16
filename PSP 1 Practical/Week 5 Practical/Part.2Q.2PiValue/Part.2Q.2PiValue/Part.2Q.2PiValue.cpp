// Part.2Q.2PiValue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	float piValue, expressionValue = 0;

	cout << " Enter n value ";
	cin >> n;

	for (int i = 1; i <= n; i++) {

		if (i % 2 == 0) {

			expressionValue = expressionValue - (1.00 / ((2 * i) - 1));

		}
		else if (i % 2 != 0) {

			expressionValue = expressionValue + (1.00 / ((2 * i) - 1));

		}

		piValue = 4 * expressionValue;

		cout << piValue << endl;

	}
	return 0;
}