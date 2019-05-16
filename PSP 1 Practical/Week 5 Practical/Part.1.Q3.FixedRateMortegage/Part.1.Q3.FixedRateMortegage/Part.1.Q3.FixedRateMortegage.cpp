// Part.1.Q3.FixedRateMortegage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float amount, payment;
	int numbeOfYears;
	float interest;

	cout << " Enter the  amount : ";
	cin >> amount;
	cout << "Enter the yeas :";
	cin >> numbeOfYears;
	cout << "Enter the interest rate :";
	cin >> interest;

	payment = amount;

	for (int i = 1; i <= numbeOfYears; i++) {
		amount = amount * (1 + interest / 100);
	}

	cout << "The total payment need to pay to bank is :";
	cout << amount;
	return 0;
}
