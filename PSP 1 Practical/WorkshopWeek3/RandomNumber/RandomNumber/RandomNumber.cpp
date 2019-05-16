// RandomNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int randomnumber;
	int unitdigit;

	srand(time(NULL));

	randomnumber = rand();

	cout << randomnumber << " : randomnumber" << endl;

	unitdigit = randomnumber % 10;


	unitdigit = unitdigit + 1;


	if (unitdigit == 1) {
		unitdigit = 3;
	}

	if (unitdigit == 2) {
		unitdigit = 10;
	}

	cout << "final random number is" << endl;

	cout << unitdigit;
	cout << endl;
	return 0;
}

