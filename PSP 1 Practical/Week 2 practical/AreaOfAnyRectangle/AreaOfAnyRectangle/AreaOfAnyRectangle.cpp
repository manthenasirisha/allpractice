// AreaOfAnyRectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float area;
	float length;
	float width;

	cout << "Enter the length:";
	cin >> length;
	cout << "Enter the width:";
	cin >> width;

	area = length * width;

	cout << "area is:";
	cout << area;
	cout << endl;
	return 0;
}
