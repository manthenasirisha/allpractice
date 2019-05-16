// WaterBill.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int accountNumber;
	char useCode;
	float waterUsed;
	float waterBill = 0.0;

	cout << " Enter your account number : ";
	cin >> accountNumber;
	cout << " Enter use code : ";
	cin >> useCode;
	cout << " Enter used water : ";
	cin >> waterUsed;

	if (useCode == 'H') {
		waterBill = 5 + waterUsed * 0.005;
	}
	else if (useCode == 'C') {

		if (waterUsed <= 4000000) {
			waterBill = 1000.00;
		}
		else {
			waterBill = 1000.00 + waterUsed * 0.025;
		}
	}
	else if (useCode == 'I') {

		if (waterUsed <= 4000000) {
			waterBill = 1000.00;
		}
		else if (waterUsed <= 1000000) {
			waterBill = 2000.00;
		}
		else {
			waterBill = 3000.00;
		}

	}

	cout << " Bill for the account number  " << accountNumber << " is : " << waterBill;

}
