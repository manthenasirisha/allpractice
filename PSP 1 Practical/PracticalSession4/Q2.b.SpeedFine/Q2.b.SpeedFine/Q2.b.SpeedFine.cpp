// Q2.b.SpeedFine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float speed;
	int   fine = 0;

	cout << " Enter the speed : ";
	cin >> speed;

	if (speed > 50)

		fine = 100;

	else if (speed >= 41)

		fine = 75;

	else if (speed >= 31)

		fine = 50;

	cout << "fine is :" << fine;

	cout << endl;


	return 0;
}

