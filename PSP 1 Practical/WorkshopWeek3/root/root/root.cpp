// root.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	int x, y;

	cout << "Enter the x value :";
	cin >> x;

	if (x >= -4 && x != 3 && x != 5) {

		y = sqrt(x + 4) / (x - 3) * (x - 5);

		cout << "value is :";
		cout << y << endl;
	}
	else {
		cout << "you can't enter less -4 and 3   and 5";
	}
		return 0;
}
