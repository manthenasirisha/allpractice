// commonNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int calculatecommonNumbers(int, int);

int main()
{
	int number1, number2;
	 
	cout << " Enter number1 and number2 with space :";
	cin >> number1 >> number2;

	int commonnnumber = calculatecommonNumbers(number1, number2);

	cout << "common numbers are :" << commonnnumber;
}
int calculatecommonNumbers(int number1, int number2)
{
	int remainder1, remainder2, count = 0;
	while (number1 != 0 && number2 != 0) {
	
		remainder1 = number1 % 10;
		remainder2 = number2 % 10;

		if (remainder1 == remainder2) {
			count = count + 1;
		}

		number1 = number1 / 10;
		number2 = number2 / 10;
	}
	return count;
}


