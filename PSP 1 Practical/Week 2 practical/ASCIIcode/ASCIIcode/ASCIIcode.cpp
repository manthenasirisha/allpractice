// ASCIIcode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char inputcharcter;
	int  asciicode;

	cout << "Enter the input charcter : ";
	cin >> inputcharcter;

	cout << endl;

	asciicode = inputcharcter;

	cout << "Asciicode is : ";
	cout << asciicode;

	cout << endl;
	return 0;
}
