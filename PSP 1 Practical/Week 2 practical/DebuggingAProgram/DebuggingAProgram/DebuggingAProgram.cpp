// DebuggingAProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	int x1, x2;
	cout << "enter a value for a, b and c (separate by space):";
	cin >> a;
	cin >> b >> c;
	x1 = ((-b) + sqrt(b*b - 4 * a*c)) / (2 * a);
	x2 = ((-b) - sqrt(b*b - 4 * a*c)) / (2 * a);
	cout << "root1 = " << x1 << " and root2 = " << x2;
	return 0;
}
