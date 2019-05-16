// Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	int n, number;
	int reversenumber = 0;

	cout << " Enter the n :";
	cin >> n;

	number = n;

	while (n != 0) {
		reversenumber = reversenumber * 10 + n % 10;
		n = n / 10;
	}
	if (reversenumber == number) {

		cout << " palindrome " << endl;
	}
	else {

		cout << " Not a palindrome " << endl;
	}
	return 0;
}

