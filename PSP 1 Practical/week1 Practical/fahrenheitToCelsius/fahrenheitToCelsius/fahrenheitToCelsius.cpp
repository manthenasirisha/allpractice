// fahrenheitToCelsius.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>
#include <iostream>
using namespace std;
int main()

{
	float fHeat;
	float celcius;

	cout << "Enter the Fahrenheit temperature:";
	cin >> fHeat;

	cout << endl;

	celcius = (fHeat - 32) * 5 / 9;
	cout << "the temperature in celcius is:";
	cout << celcius;

	cout << endl;

	return 0;




}
