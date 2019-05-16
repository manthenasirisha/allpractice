// RoomRate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main() {

	{
		float roomrate;
		int numberOfNights;
		float hotelbill;
		float vat;
		float totalBill;
		float serviceUsed;

		cout << "Enter the room rate : ";
		cin >> roomrate;
		cout << endl;
		cout << "Enter number of nights :";
		cin >> numberOfNights;
		cout << endl;
		cout << "Enter the service used : ";
		cin >> serviceUsed;
		cout << endl;
		hotelbill = (roomrate * numberOfNights) + serviceUsed;
		vat = (20.0 / 100) * hotelbill;
		totalBill = hotelbill + vat;

		cout << "Total amount for room  and servives :";
		cout << hotelbill <<endl;
		cout << "Vat charged at 20% :"<< vat<<endl;
		cout << "your total bill is :";
		cout << totalBill ;
		cout << endl;

		return 0;
	}

}



