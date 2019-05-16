// AreaOfCricle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float area;
	float radius;

	cout << "Enter the radius :";
	cin >> radius;

	area = (22.0 / 7) * radius * radius;

	cout << "area is :";
	cout << area;
	cout << endl;

	return 0;
}
