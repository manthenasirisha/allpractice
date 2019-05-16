// EvaluateEquation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float x, y;

	cout << "Enter the x value :";
	cin >> x;

	y = ((-5 * x*x) + (8 * x) + 7) / (x - 7);

	cout << "value of expression is : ";
	cout << y;
	cout << endl;
	return 0;
}
