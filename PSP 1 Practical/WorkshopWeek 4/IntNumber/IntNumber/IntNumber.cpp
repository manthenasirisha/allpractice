// IntNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	int number;

	cout << " Enter the number :";
	cin >> number;

	if (number > 0)

		cout << "number is positive ";

	if (number % 2 == 0)
		cout << "number is even ";


	cout << endl;

	return 0;
}
