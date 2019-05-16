// IV.4.DateMonthyear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int dateMonthYear;
	int dateMonth;
	int date;
	int month;
	int year;

	cout << "Enter the date month and year : ";
	cin >> dateMonthYear;

	year = dateMonthYear % 100;

	dateMonth = dateMonthYear / 100;

	month = dateMonth % 100;

	date = dateMonth / 100;

	cout << "date is : " << date;


	cout << "\n month is : " << month;


	cout << "\n year is : " << year;
	cout << endl;



	return 0;
}


