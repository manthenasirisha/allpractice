// part1.Q1.SquareOfEachInteger.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	int value = 0;

	cout << " Enter n value : " << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {

		value = i * i;
	}
	cout << value << endl;
	return 0;
}
