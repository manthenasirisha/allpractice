// IV.1.expressionValue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	float expressionValue;
	float x;

	cout << "Enter x value : ";
	cin >> x;

	expressionValue = 3 * x * x * x + 4 * x * x + 7 * x + 10;

	cout << " Expression value is : ";
	cout << expressionValue;
	cout << endl;
	return 0;
}

