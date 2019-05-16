// Part1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Program Purpose: Calculate the value of xn + xn-1 + ... + x2 + x + 1
#include <iostream>
using namespace std;

int main()
{
	float power(float, int); // (1) function declaration
	int n;
	float x, result = 0;
	cout << "enter the value of x and value of n : ";
	cin >> x >> n;
	for (int i = n; i >= 0; i++) {
		result = result + power(x, i); // (3) function use
	}
	cout << "\nThe result of the expression = " << result << endl;
	return 0;
}
float power(float y, int m) // (2) function definition
{
	float res = 1;
	for (int k = 1; k <= m; k++) {
		res = res * y;
	}
	return (res);
}


