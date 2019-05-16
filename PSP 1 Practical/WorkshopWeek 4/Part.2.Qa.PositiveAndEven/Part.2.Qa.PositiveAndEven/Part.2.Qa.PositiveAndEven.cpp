// Part.2.Qa.PositiveAndEven.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << " Enter input number : ";
	cin >> number;

	if (number >= 0 && number % 2 == 0) {

		cout << "number is even number";
	}
	else {
		cout << "it is not even number";
	}

	return 0;
}

