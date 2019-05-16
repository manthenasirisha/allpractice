// homeWork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	float value = 0;


	cout << " Enter n value : ";
	cin >> n;

	for (float i = 1; i <= n - 1; i++) {

		value = value + (i / (i + 1));


	}

	cout << "value is " << value << endl;
	return 0;
}
