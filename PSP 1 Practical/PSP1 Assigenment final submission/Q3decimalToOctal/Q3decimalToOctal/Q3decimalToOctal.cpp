// Q3decimalToOctal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
3.) In this exercise, your task is to develop a solution to convert a decimal number to an octal number and vice versa.
Your program should allow users select which conversion they like.

Analysis:

1.	Read the conversion type, octal to decimal or decimal to octal, from the user.
2.	Based on the above input,
a.If octal to decimal is selected, then ask the user to enter the octal number and convert into decimal number.
b.If decimal to octal is selected, then ask the user to enter the decimal number and convert into octal number.

Example : 1 - Octal to decimal :

Octal Number : 24
Decimal Number : 20


Example : 2     decimal to Octal :

Decimal Number : 36
Octal Number : 44.

________________________________________

PSEUDO CODE
START
1) Read the conversion type
2)
if conversion Type is decimal to octal
then{
	Read the decimal number into decimalNumber
	let octalNumber = 0;

	let multiplicand = 1;
	while (decimalNumber != 0) {
		remainder = decimalNumber % 8
		decimalNumber = decimalNumber / 8

		octalNumber = remainder * multiplicand + octalNumber;
		multiplicand = multiplicand * 10;
	}

	print octalNumber;
}
else { // octal to decimal
	Read the octal number
		let decimalNumber = 0
		let multiplicand = 1;
	while (octalNumber != 0) {
		lastDigit = octalNumber % 10
			octalNumber = octalNumber / 10
			decimalNumber = decimalNumber + lastDigit * multiplicand;
		multiplicand = multiplicand * 8;
	}

	print decimalNumber

}
END
*/


#include "pch.h"
#include <iostream>
using namespace std;

int calculateTheDecimalNumber(int);
int calculateTheOctalNumber(int);

int main()
{
	int decimalNumber = 0, octalNumber = 0;
	char conversionType;
	int multiplication = 1;

	cout << " Do you want to decimal to octal (D) OR octal to decimal (O) : ";
	cin >> conversionType;

	if (conversionType == 'D') {
		cout << " Enter the decimal Number :";
		cin >> decimalNumber;

		octalNumber = calculateTheOctalNumber(decimalNumber);

		cout << " Octal Number is : " << octalNumber << endl;
	}
	else if (conversionType == 'O') {
		cout << " Enter the octal Number :";
		cin >> octalNumber;

		decimalNumber = calculateTheDecimalNumber(octalNumber);

		cout << " Decimal Number is : " << decimalNumber;
	}

}

int calculateTheDecimalNumber(int octalNumber) {

	int multiplication = 1;
	int remainder;
	int decimalNumber = 0;

	while (octalNumber != 0) {
		remainder = octalNumber % 10;
		octalNumber = octalNumber / 10;

		decimalNumber = decimalNumber + remainder * multiplication;
		multiplication = multiplication * 8;
	}

	return decimalNumber;
}

int calculateTheOctalNumber(int decimalNumber) {
	int multiplicand = 1;
	int remainder ;
	int octalNumber = 0;

	while (decimalNumber != 0) {
		remainder = decimalNumber % 8;
		decimalNumber = decimalNumber / 8;

		octalNumber = remainder * multiplicand + octalNumber;
		multiplicand = multiplicand * 10;
	}

	return octalNumber;
}


