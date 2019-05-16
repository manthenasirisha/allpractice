// Part2.Q6.a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n, lastDigit;
	int previousNum;

	cout << "Enter n number :";
	cin >> n;
	bool fristTime = true;

	while (n != 0) {
		previousNum = n;

		if (fristTime) {
			lastDigit = n % 10;
			fristTime = false;
		}

		n = n / 10;

	}
	cout << "first digit is : ";
	cout << previousNum << endl;

	cout << "Last digit is : ";
	cout << lastDigit << endl;

	return 0;
}

