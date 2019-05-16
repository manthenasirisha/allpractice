// BuckinghamStaffCheckout.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int remainder;
	int quotient;
	int number;

	cout << "Enter the number : ";
	cin >> number;

	cout << endl;

	quotient = number / 20;

	cout << quotient << " number of 20s";
	cout << endl;

	remainder = number % 20;
	quotient = remainder / 10;

	cout << quotient << " number of 10s ";
	cout << endl;

	remainder = remainder % 10;
	quotient = remainder / 5;

	cout << quotient << " number of 5s ";
	cout << endl;

	remainder = remainder % 5;
	quotient = remainder / 1;

	cout << quotient << " number of 1s ";
	cout << endl;


	return 0;
}

