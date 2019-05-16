// Q.3.a.nestedIf.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	float x, y;

	cout << "Enter the x value :";
	cin >> x;

	cout << "Enter the y value :";
	cin >> y;

	if ((x > 0 && y > 0) || (x < 0 && y < 0)) {

		cout << " product is positive ";
	}
	else {
		cout << " product is negative ";
	}

	cout << endl;
	return 0;
}

