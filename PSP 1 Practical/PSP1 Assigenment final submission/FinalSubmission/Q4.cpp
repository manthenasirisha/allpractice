// Author : Sirisha penmetsa
// Date : 21/03/2019

#include "pch.h";
#include <iostream>
#include <string>
using namespace std;
//4a
int calculateTheSumOfDivisors(int number) 
{
	int sumOfDevisors = 0;
	for (int i = 1; i <= number / 2; i++) {
		if (number % i == 0) {
			sumOfDevisors = sumOfDevisors + i;
		}
	}
	return sumOfDevisors;
}
//4b
string  calculateThePositiveIntegerIsDeficientPerfectORabundant(int number) 
{
	int sumOfDevisors = calculateTheSumOfDivisors(number);
	string positiveInteger;

	if (sumOfDevisors < number) {
		positiveInteger = " deficient ";
	}
	else if (sumOfDevisors == number) {
		positiveInteger = " perfect ";
	}
	else if (sumOfDevisors > number) {
		positiveInteger = " abundant ";
	}
	return positiveInteger;
}
//4c

void calculateTheXnor(int number1, int number2)
{
		int rem1, rem2;
	
		if (number1 != 0 && number2 != 0 ){

			calculateTheXnor(number1 / 10, number2 / 10);

			rem1 = number1 % 10;
			rem2 = number2 % 10;

			if (rem1 == rem2) {
				cout << "1";
			}
			else {
				cout << "0";
			}
		}
		else {
			return;
		}

}
//4d
int calculateTheReverseNumber(int number)
{
	int reveserNumber = 0;
	
		do {
			int remainder = number % 10;
			number = number / 10;
			reveserNumber = reveserNumber * 10 + remainder;
		} while (number != 0);
			
		return reveserNumber;
}
