// AreaOfTriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float area;
	float height;
	float base;

	cout << "Enter the height :";
	cin >> height;

	cout << endl;

	cout << "Enter the base :";
	cin >> base;

	cout << endl;

	area = 1.0 / 2 * base * height;

	cout << "area of triangle :";
	cout << area;

	cout << endl;

	return 0;
}

