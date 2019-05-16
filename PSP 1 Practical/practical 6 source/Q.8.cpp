// Q.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	int n;

	cout << "Enter the number :";
	cin >> n;

	for (int i = n; i >= 1; i--) {
		cout << endl;
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
	}
	return 0;
}


