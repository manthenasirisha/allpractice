// AverageOf3Integers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	float average;

	cout << "Enter value of a values:";
	cin >> a;
	cout << endl;

	cout << "Enter value of b :";
	cin >> b;
	cout << endl;

	cout << "Enter value of c :";
	cin >> c;
	cout << endl;

	average = (a + b + c) / 3.0;

	cout << " average value is :" << average << endl;
	return 0;
}
