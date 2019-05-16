// Part2.Q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n, i = 0;

	cout << "Enter n number :";
	cin >> n;

	while (n != 0) {

		n = n / 10;
		i = i + 1;


	}
	cout << i << endl;
	return 0;
}
