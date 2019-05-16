// Q.2PositiveIntegerdivisors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << " Enter the n nuber : ";
	cin >> n;

	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
		cout << i << ",";
		}
	}

	return 0;
}


