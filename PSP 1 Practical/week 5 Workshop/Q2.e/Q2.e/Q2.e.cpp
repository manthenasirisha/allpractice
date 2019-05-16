// Q2.e.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n = 8;
	float ev = 0;

	while (ev < n) {
		cout << ev;
		ev = ev + 2;
	}
	cout << "\n";
	return 0;
}

