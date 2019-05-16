// IV.5.CashDwposit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float cashDeposit;
	float annualInterest;
	int   noOfYears;
	float totalSavings;


	cout << "Enter Deposited cash : ";
	cin >> cashDeposit;

	cout << "Enter interest rate : ";
	cin >> annualInterest;

	cout << "Enter No of years : ";
	cin >> noOfYears;

	totalSavings = cashDeposit + (cashDeposit * (annualInterest / 100)) * noOfYears;

	cout << "Total Savings : ";
	cout << totalSavings;
	cout << endl;
	return 0;
}

