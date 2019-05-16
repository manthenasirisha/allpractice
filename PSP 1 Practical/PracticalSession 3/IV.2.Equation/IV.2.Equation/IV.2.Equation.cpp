// IV.2.Equation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float x;
	float y;

	cout << "Enter x value :";
	cin >> x;

	if (x == 0 || x == 5 || x == -4) {

		cout << " you can't enter 0 or 5 or -4 ";

		return 0;
	}

	y = (-x * x + 10 * x + 24) / (x * x * x - x * x - 20 * x);

	cout << "y value is : ";
	cout << y << endl;

	return 0;
}
