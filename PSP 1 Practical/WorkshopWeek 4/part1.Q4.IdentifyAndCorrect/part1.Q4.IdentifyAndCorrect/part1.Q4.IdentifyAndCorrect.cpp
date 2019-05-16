// part1.Q4.IdentifyAndCorrect.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int age;

	cout << " Enter the age";
	cin >> age;

	if (age >= 65)

		cout << "Age is greater than or equal to 65" << endl;
	else

		cout << "Age is less than 65" << endl;

	if (age >= 65)

		cout << " Age is greater than or equal to 65" << endl;
	else
		cout << " Age is less than 65 " << endl;
	return 0;
}
