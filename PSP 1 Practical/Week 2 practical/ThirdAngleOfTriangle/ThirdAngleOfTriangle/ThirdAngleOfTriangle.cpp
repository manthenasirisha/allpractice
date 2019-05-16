// ThirdAngleOfTriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float thirdangle;
	float secondangle;
	float firstangle;

	cout << "Enter the first angle ";
	cin >> firstangle;
	cout << endl;

	cout << "Enter the second angle";
	cin >> secondangle;
	cout << endl;

	thirdangle = 180 - firstangle - secondangle;

	cout << "third angle is :";
	cout << thirdangle;
	cout << endl;
	return 0;
}

