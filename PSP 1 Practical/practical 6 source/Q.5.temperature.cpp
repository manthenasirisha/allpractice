// Q.5.temperature.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{ 
	int hotdays = 0, pleasantdays = 0, colddays =0;
	int temperature;
	char inputchar ;

	cout << "Enter the temperature ";

	do {

		
		cin >> temperature;

		if (temperature >= 29) {\
			hotdays = hotdays + 1;
		}
		else if (temperature >= 15 && temperature <= 29) {
			pleasantdays = pleasantdays + 1;
		}
		else {
			colddays = colddays + 1;
		}

		inputchar = getchar();
	} while (inputchar != '\n');

	cout << "Number of hot days :";
	cout << hotdays << endl;
	cout << "Number of pleasnt days :";
	cout << pleasantdays <<"\n";
	cout << "Number of cold days :";
	cout << colddays << "\n";
}
