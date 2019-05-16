// Q.5.b.averageTemp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	
	int temperature;
	char inputchar;
	float average;
	int sumoftemp = 0;
	int count = 0;

	cout << "Enter the temperature ";

	do {


		cin >> temperature;

		sumoftemp = sumoftemp + temperature;

		count = count + 1;

		inputchar = getchar();
	} while (inputchar != '\n');

	average = sumoftemp / count;
	cout << "Average temp is :";
	cout << average;
	
}

