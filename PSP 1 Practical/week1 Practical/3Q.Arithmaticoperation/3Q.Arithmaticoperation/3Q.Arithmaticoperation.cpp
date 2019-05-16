// 3Q.Arithmaticoperation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char  i;
	int Loprend, Roperand;
	float sum ;

	cout << " Enter the left oprend :";
	cin >> Loprend;
	cout << "Enter the right oprend :";
	cin >> Roperand;
	cout << " Enter the oparetor :";
	cin >> i;

	if (i == 'M') {
		sum = Loprend * Roperand;
	}
	else if (i == 'A') {
		sum = Loprend + Roperand;
	}
	else if (i == 'D') {
		sum = Loprend / Roperand;
	}
	else if (i == 'S') {
		sum = Loprend - Roperand;
	}
	cout << "sum is :";
	cout << sum;
	return 0;
}

