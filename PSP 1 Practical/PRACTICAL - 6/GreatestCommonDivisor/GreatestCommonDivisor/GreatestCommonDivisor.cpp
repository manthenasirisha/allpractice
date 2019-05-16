// GreatestCommonDivisor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
   
	int num1, num2, gcd ;

	cout << " Enter the number1 and number2 with space : ";
	cin >> num1 >> num2;

	for (int i = 1; i <= num1 && i <= num2; i++) {

		if (num1 % i == 0 && num2 % i == 0) {
			gcd = i;
		}
	}
		cout << "GCD is " << gcd;

}

