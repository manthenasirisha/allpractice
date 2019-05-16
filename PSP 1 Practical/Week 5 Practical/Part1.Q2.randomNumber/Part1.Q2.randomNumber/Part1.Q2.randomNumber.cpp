// Part1.Q2.randomNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	int value;
	int randomNumber;

	cout << " Enter n value : ";
	cin >> n;

	for (int i = 1; i <= n; i++) {

		randomNumber = rand();
		value = rand();

	}
	cout << value << endl;

	return 0;
}

