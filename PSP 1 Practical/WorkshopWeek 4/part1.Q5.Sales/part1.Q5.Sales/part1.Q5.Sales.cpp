// part1.Q5.Sales.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	float sales;


	cout << "Enter the number of sales : ";
	cin >> sales;

	if (sales <= 2000)
		cout << "commission is 2 per ";

	else if (sales <= 4000)
		cout << "commission is 4 per";

	else if (sales <= 6000)
		cout << "commission is 7 per";

	else
		cout << "commission is 10 per" << endl;





	return 0;
}
