// IV.4.RealNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float realNumber;
	int decimal;
	float fraction;

	cout << "Enter the real number : ";
	cin >> realNumber;

	decimal = realNumber;

	fraction = realNumber - decimal;

	if (fraction >= .60) {
		decimal = decimal + 1;
	}

	cout << "final rounded value is : ";
	cout << decimal;
	cout << endl;


	return 0;
}


