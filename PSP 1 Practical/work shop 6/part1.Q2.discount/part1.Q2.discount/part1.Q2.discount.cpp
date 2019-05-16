// part1.Q2.discount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float totalSpend;
	float discount;
	float bill;

	cout << "Enter the total spending money :";
	cin >> totalSpend;


	if (totalSpend > 1000) {
		bill = totalSpend - totalSpend/100 * 20;
	}
	else if (totalSpend > 500) {
		bill = totalSpend - totalSpend / 100 * 15;
	}
	else if (totalSpend > 100) {
		bill = totalSpend - totalSpend/ 100 * 10;
	}
	cout << " Total bill is :";
	cout << bill;

}


