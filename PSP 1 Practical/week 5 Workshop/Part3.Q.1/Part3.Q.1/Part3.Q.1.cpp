// Part3.Q.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	char ch = 0;
	int inputNumber;
	int minNumber = 0;
	int maxNumber = 0;
	bool firstTime = true;
	int i = 0;
	float totalValue = 0;



	cout << "enter the values" << endl;

	while (ch != '\n') {

		cin >> inputNumber;

		totalValue = totalValue + inputNumber;

		i++;

		if (firstTime) {

			minNumber = inputNumber;
			maxNumber = inputNumber;
			firstTime = false;

		}
		else {

			if (inputNumber < minNumber) {

				minNumber = inputNumber;
			}
			else if (inputNumber > maxNumber) {

				maxNumber = inputNumber;
			}
		}
		ch = getchar();
	}
	float average = (totalValue *  1.0) / i;

	cout << endl << "minNumber is:" << minNumber;
	cout << endl << "maxNumber is:" << maxNumber;
	cout << endl << "average is:" << average;
return 0;
}


