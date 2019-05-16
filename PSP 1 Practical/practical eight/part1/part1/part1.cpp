// part1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int option;
	cout << " Welcome to my library tester program :";

	do {
	
		cout << " Please choose one option below " << endl;
		cout << " 1. Calculate the surface area of a close cylinder " << endl;
		cout << " 2. categorise age into an age group (young, adult, senior)" << endl;
		cout << " 3. calculate the value of x to power n " << endl;
		cout << "4. Swap the contents of two variables " << endl;
		cout << "5.Exit the testing framework " << endl;
		cout << " Please enter the option :" << endl;
		cin >> option;

		switch (option) {
			case 1: {
					cout << " make a call to the to calculate surface area ";
					break;
				}
			case 2: {
					cout << " make a call to the categorise age  ";
					break;
				}
			case 3: {
					cout << " make a call to the to calculate n power x ";
					break;
				}
			case 4: {
					cout << " make a call to the to swap the contents ";
					break;
				}
			case 5:  {
					cout << " exit the testing framework : ";
					break;
				}
			default: {
				cout << " exit as there is no maching option : ";
			}
		}
	} while (option != 5);
}


