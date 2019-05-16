// discount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float amount;

	cout << " Enter amount :";
	cin >> amount;

	if (amount < 100) {
		cout << " discout == 0 ";
	}
	else if (amount <= 500) {
		cout << "10% discount";
	}
	else if (amount <= 1000) {
	
		cout << " 15% discount ";
	}
	else {
		cout << " 20% discount ";
	}

}

