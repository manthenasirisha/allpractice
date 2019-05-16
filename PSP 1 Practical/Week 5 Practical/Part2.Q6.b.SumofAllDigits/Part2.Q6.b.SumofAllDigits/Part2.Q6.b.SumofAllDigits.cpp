// Part2.Q6.b.SumofAllDigits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{

	int n;
	int value = 0;

	cout << " Enter the n :";
	cin >> n;

	while (n != 0) {

		value = value + n % 10;
		n = n / 10;
	}
	cout << value;
	return 0;
}
