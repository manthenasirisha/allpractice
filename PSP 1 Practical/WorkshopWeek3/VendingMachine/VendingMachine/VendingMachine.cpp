// VendingMachine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float costofP = 2.99, costofC = 1.99, costofJ = 3.99;
	float inputamount;
	float change;
	char selecteditem;
	int changeinpence;
	int numberof10s, numberof5s, numberof1s;
	int remainder;

	cout << "insert the coin :";
	cin >> inputamount;
	cout << endl;

	cout << "Enter the item :";
	cin >> selecteditem;
	cout << endl;

	if (selecteditem == 'P') {
		change = inputamount - costofP;
	}
	else if (selecteditem == 'C') {
		change = inputamount - costofC;
	}
	else if (selecteditem == 'J') {
		change = inputamount - costofJ;
	}

	changeinpence = change * 100;

	numberof10s = changeinpence / 10;
	remainder = changeinpence % 10;

	if (remainder != 0) {
		numberof5s = remainder / 5;
		remainder = remainder % 5;
	}
	if (remainder != 0) {
		numberof1s = remainder;
	}
	cout << numberof10s;
	cout << "number of 10s" << endl;

	cout << numberof5s;
	cout << "number of 5s" << endl;

	cout << numberof1s;
	cout << "number of 1s" << endl;

 return 0;
}

