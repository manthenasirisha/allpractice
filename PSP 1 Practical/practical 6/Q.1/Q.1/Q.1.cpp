// Q.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter the n value :";
	cin >> n;

	for (int i = 1; i <= 10; i++){

		cout << i << " * " << n << " = " << n * i << endl;
	}
	return 0;
}
