// Part.2.Q3Extra.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float x, value = 1;
	int n;

	cout << " Enter x value :";
	cin >> x;

	cout << " Enter n value : ";
	cin >> n;

	for (int i = 1; i <= n; i++) {

		value = value * x;
	}

	cout << value << endl;
	return 0;
}

 
