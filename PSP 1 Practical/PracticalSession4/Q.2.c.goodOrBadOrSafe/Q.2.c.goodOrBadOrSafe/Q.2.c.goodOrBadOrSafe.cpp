// Q.2.c.goodOrBadOrSafe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#define Threshold 2000 // threshold for "spending a lot”
using namespace std;

int main()
{
	char answer1, answer3, answer4;
	int amount;

	cout << "Do you pay in full or the minimum amount (f/m)? ";
	cin >> answer3;

	if (answer3 == 'f') {

		cout << "Safe customer  " << endl;
	}
	else
	{

		cout << "Do you always pay your monthly bill in full in time (y/n)? ";
		cin >> answer1;

		cout << "How much do you normally spend in a month? ";
		cin >> amount;

		cout << "Do you keep up the payment of monthly interest (y/n)? ";
		cin >> answer4;

		if (answer1 == 'n' && amount > Threshold && answer4 == 'y')

			cout << "Good customer ";
		else {

			cout << " customer not fair at all " << endl;
		}

	}

	return 0;
}

