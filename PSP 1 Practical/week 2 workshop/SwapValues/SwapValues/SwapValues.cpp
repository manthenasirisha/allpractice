// SwapValues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()

{
	int a, b, c;

	cout << "Enter the a :";
	cin >> a;
	cout << endl;

	cout << "Enter the b :";
	cin >> b;
	cout << endl;

	c = a;
	a = b;
	b = c;

	cout << "your value of a is : " << a << endl;
	return 0;
}
