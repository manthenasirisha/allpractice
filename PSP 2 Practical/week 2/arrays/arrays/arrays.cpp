// arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;




int main()
{
	//Q1
	/*int numbers[10];

	for (int i = 0; i <= 9; i++) {
		cin >> numbers[i];
	}
	 
	cout << " 10 integers are : ";
	
	for (int i = 0; i <= 9; i++) {
		cout << numbers[i]<< ' ';
	}
	*/

	//Q2
	/*
	float number[10];

	for (int i = 0; i <= 9; i++) {
		cin >> number[i];

	}
	cout << "10 float numbers are : ";

	for (int i = 0; i <= 9; i++) {
		cout << number[i] << ' '<< endl;
	}
	*/
	//Q3
	string  names[10];

	for (int i = 0; i <= 9; i++) {
		cin >> names[i];
	}
	cout << "10 strings are :";

	for (int i = 0; i <= 9; i++) {
		cout << names[i] << ' ' << endl;
	}

}




