// g.365days.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int year;
	cout << "Enter the year : ";
	cin >> year;

	if ( year % 400 == 0 || year % 100 == 0) {
		cout << "leap year ";
	}
	else if (year % 100 == 0) {
		cout << "year not a leap year ";
	}
	
	
	else {
		cout << "not a leap year ";
	}
}


