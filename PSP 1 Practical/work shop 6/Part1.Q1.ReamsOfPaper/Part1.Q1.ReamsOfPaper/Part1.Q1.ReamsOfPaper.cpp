// Part1.Q1.ReamsOfPaper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int NumberOfPeople;
	int NumberOfPages;
	float NumberOfreams;
	float fractionPart;
	int decimalPart;

	cout << "Enter the Number of people :";
	cin >> NumberOfPeople;
	cout << "Enter the Numper Of pages in report :";
	cin >> NumberOfPages;

	NumberOfreams = (NumberOfPeople * NumberOfPages) / 1000.0;

	decimalPart = NumberOfreams;
	fractionPart = NumberOfreams - decimalPart;

	if (fractionPart > 0) {
		decimalPart = decimalPart + 1;
	}


	cout << "Number of Reams are :";
	cout << decimalPart;
}

