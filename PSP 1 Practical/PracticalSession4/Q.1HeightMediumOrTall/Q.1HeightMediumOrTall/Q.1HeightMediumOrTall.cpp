// Q.1HeightMediumOrTall.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	float bodyHeight;

	cout << "Enter height in meters";
	cin >> bodyHeight;

	if (bodyHeight >= 1.85) {

		cout << " person is Tall ";
	}
	else if (bodyHeight <= 1.40) {

		cout << " person is Short ";
	}

	else {

		cout << " person is Medium ";
	}
	cout << endl;
	return 0;
}

