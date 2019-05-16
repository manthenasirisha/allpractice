// HeightInMeters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	float heightinMeters;
	float heightinCentimeters;
	float heightininches,inches;
	int feet;

	cout << "Enter your height in meters :";
	cin >> heightinMeters;

	heightinCentimeters = heightinMeters * 100;
	heightininches = heightinCentimeters / 2.54;

	cout << "height in inches" << heightininches <<endl;

	feet = heightininches / 12;
	inches = heightininches - (feet * 12);

	cout << "number of feet :" << feet << endl;
	cout << "number of inches :" << inches << endl;




	return 0;
}

