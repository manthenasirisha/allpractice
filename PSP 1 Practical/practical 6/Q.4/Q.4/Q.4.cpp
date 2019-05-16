// Q.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	int startWith;
	int value = 1;

	cout << "Enter the numer :";
	cin >> n;

	if (n % 2 == 0) {
		startWith = 2;
	}
	else {
		startWith = 1;
	}

	for (int i = startWith; i <= n; i = i + 2) {
		
		value = value * i;
	}
	cout << value;
	return 0;
}

 
