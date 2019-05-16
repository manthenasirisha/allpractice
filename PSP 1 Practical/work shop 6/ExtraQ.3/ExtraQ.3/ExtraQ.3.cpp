// ExtraQ.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter n value :";
	cin >> n;

	for (int i = 1; i <= n; i++) {

		cout << i << " ";
		if (i % 5 == 0) {
			cout << endl;
		}
	}
	return 0;
}

