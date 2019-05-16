// part.2.Qb.maximumNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cout << "Enter number :";
	cin >> a;

	cout << "Enter number :";
	cin >> b;

	cout << "Enter number :";
	cin >> c;

	if (a > b) {

		if (a > c) {

			cout << " A is biggest number ";

		}
		else {

			cout << "C is biggest number ";
		}
	}
	else {

		if (b > c) {

			cout << "B is the biggest number ";

		}
		else {

			cout << "C is the biggest number ";
		}

	}
	cout << endl;
	return 0;
}

