// Q.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	int sum = 0;

	cout << "Enter the number : ";
	cin >> n;

	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			sum = sum + i;
		}
	}

	if (sum == n) {
		cout << "perfect number" << endl;
	}
	else {
		cout << "not a perfect number" << endl;
	}
	
	return 0;
}


