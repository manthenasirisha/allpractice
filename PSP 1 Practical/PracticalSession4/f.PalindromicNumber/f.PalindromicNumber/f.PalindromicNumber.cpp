// f.PalindromicNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int Number, reverseNumber, ld, n;

	cout << " Enter the Number : ";
	cin >> Number;

	n = Number;

	while (n != 0) {

		ld = n % 10;
		reverseNumber = reverseNumber * 10 + ld;
		n = n / 10;
	}
	if (reverseNumber == Number) {

		cout << "palindrome";
	}
	else {
		cout << "Not a palindrome ";
	
	}
}

