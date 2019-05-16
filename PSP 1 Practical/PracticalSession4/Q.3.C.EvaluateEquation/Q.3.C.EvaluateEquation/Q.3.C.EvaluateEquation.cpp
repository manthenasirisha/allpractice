// Q.3.C.EvaluateEquation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	float y, t;

	cout << "Enter the y value : ";
	cin >> y;

	if (y <= 10000) {

		t = 200;
	}
	else if (y <= 20000) {

		t = 200 + 0.1 * (y - 10000);
	}
	else if (y <= 50000) {

		t = 1200 + 0.15 * (y - 20000);
	}
	else {

		t = 5700 + 0.25 * (y - 50000);
	}

	cout << t << endl;

	return 0;
}

