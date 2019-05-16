// TwoIntegerValues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int quotient;   //out put
	int remainder;  //out put
	int divident;   //input
	int divisor;    //input

	cout << "Enter the divident :";
	cin >> divident;
	cout << endl;

	cout << "Enter the divisor :";
	cin >> divisor;
	cout << endl;

	quotient = divident / divisor;
	remainder = divident % divisor;
	cout << endl;

	cout << "quotient is :";
	cout << quotient;
	cout << endl;

	cout << "remainder is :";
	cout << remainder;
	cout << endl;
	return 0;
}

