// Part2.Q.2. FibonacciSequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

#sdfa
int main()
{
	int k, previous = 0, previousOfprevious = 0;
	int Newvalue;

	cout << "Enter k value :";
	cin >> k;

	for (int i = 1; i <= k; i++) {

		if (i == 1) {

			cout << 1 << "  ";
			previous = 1;
		}

		else if (i == 2) {

			cout << 1 << "  ";
			previousOfprevious = 1;

		}

		else {

			cout << previous + previousOfprevious << "  ";

			Newvalue = previous;
			previous = previous + previousOfprevious;
			previousOfprevious = Newvalue;

		}

	}



	return 0;
}
