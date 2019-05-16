// speed.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float speed;
	char peopleCossing;
	char weather;

	cout << "Enter the speed :";
	cin >> speed;

	if (speed < 20) {
	
		cout << " STAY ALERT ";
	}
	else if (speed < 30) {
	
		cout << "ARE PEOPLE crossing? ";
		cin >> peopleCossing;

		if (peopleCossing == 'Y') {
			cout << " STOP ";
		}
		else if (peopleCossing == 'N'){
			cout << "GO";
		}
    }
	else if (speed <= 70) {
		cout << " HOW IS THE Weather ?";
		cin >> weather;

		if (weather == 'R') {
			cout << " 4 SECOND GAP ";
		}
		else if (weather == 'D') {
			cout << " 2 SECOND GAP ";
		}
	}
}


