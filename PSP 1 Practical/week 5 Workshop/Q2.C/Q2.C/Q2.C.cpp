// Q2.C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	float s = 0;
	int n;
	do {
		cin >> n;
		s = s + n;
	} while (getchar() != '\n');
	cout << s;
	return 0;
}
