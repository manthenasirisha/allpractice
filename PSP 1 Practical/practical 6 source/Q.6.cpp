// Q.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number;
	int sumOfDigits = 0;
	int remainder;

	cout << "Enter the number :";
	cin >> number;

	while (number != 0) {
	
		remainder = number % 10;
		sumOfDigits = sumOfDigits + remainder;
		number = number / 10;
		cout << endl;

		cout << remainder << endl;
	}

	if (sumOfDigits % 9 == 0) {
	
		cout << "Number divisibe by 9 ";
	}
	else {
		cout << "Number not divisible by 9 ";
	}

}


