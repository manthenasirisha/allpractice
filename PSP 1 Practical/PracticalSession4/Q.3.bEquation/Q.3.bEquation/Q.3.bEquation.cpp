// Q.3.bEquation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	float x, value;

	cout << "Enter a x value :";
	cin >> x;

	if (x >= -2 && x != 3) {

		value = sqrt(x + 2) / ((x * x) - 9);

		cout << "value of expression is " << value;

	}

	else {

		cout << " x value can not be 3 or < -2 ";
	}

	cout << endl;
	return 0;
}

