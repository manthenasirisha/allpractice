// factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	int factorial = 1;

	cout << " Enter the n value : ";
	cin >> n;

	for (int i = 1; i <= n; i++) {

		factorial = factorial * i;
	}
	cout << factorial;
}

