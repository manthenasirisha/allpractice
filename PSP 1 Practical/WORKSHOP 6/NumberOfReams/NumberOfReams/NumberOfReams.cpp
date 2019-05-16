// NumberOfReams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int numberOfPeople;
	int numberOfPages;
	float numberOfReams;
	float fractionPart;
	int decimalPart;


	cout << "Enter the Number of people :";
	cin >> numberOfPeople;
	cout << "Enter the Number of pages :";
	cin >> numberOfPages;

	numberOfReams = (numberOfPeople * numberOfPages) / 1000.0;
	decimalPart   = numberOfReams;
	fractionPart = numberOfReams - decimalPart;

	if (fractionPart > 0) {
	
		decimalPart = decimalPart + 1;
	}
	cout << decimalPart << " Number of Reams needed  ";
}
