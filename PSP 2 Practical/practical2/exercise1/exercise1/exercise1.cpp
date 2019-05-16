// exercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	int numbers[10];

	cout << " Enter 10 intigers :";
	for (int i = 0; i <= 9; i++) {
		cin >> numbers[i];
	}

	cout << " 10 intigers are : ";
	for (int i = 0; i <= 9; i++) {
		cout << numbers[i] << ' ' << endl;
	}
	
	float number[10];

	cout << " Enter 10 float numbers : ";
	for (int i = 0; i <= 9; i++) {
		cin >> number[i];
	}

	cout << " 10 input numbers are : ";
	for (int i = 0; i <= 9; i++) {
		cout << number[i] << ' ' << endl;
	}
	
	 string  names[10];

	 cout << " Enter 10 names :";
	 for (int i = 0; i <= 9; i++) {
		 cin >> names[i];
	 }
	 cout << "10 strings are :";

	 for (int i = 0; i <= 9; i++) {
		 cout << names[i] << ' ' << endl;
	 }
}

