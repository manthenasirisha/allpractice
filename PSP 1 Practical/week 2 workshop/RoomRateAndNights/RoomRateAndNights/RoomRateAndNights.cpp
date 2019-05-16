// RoomRateAndNights.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	float roomrate;
	float numberOfNights;
	float hotelbill;
	float vat;
	float totalBill;

	cout << "Enter the room rate : ";
	cin >> roomrate;
	cout << endl;
	cout << "Enter number of nights :";
	cin >> numberOfNights;
	cout << endl;

	hotelbill = roomrate * numberOfNights;
	vat = (20.0 / 100) * hotelbill;
	totalBill = hotelbill + vat;

	cout << "your total bill is :";
	cout << totalBill;
	cout << endl;

	return 0;
}
