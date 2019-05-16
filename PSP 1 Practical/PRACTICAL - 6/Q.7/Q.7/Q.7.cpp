// Q.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;

		cout << " Enter the n number : ";
		cin >> n;

		for (int i = 1; i <= n; i++) {
			cout << endl;

			for (int j = 1; j <= i; j++) {
				cout << j;
			}
		}
	return 0;
}


