// Q.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


int main()

{
	int option;
	cout << "Welcome to my library tester program" << endl;

	do {
		cout << " Please choose one option below :" << endl;
		cout << "1.calculate the surface area of a close cylinder;" <<endl ;
		cout << "2. Categorise age into an age group (young, adult, senior)"<< endl;
		cout << "3.Calculate the value of x to power n" << endl;
		cout << "4.Swap the contents of two variables;" << endl;
		cout << "Exit the testing framework" << endl;
		cout << "please enter an option :" << endl;
		cin >> option;

		switch (option) {
		case 1 : {
			cout << "make a call to the to calculate the surface area of a close cylinder" << endl;
			break;
			}

		case 2: {
			cout << "make a call to the to categorise age into an age group " << endl;
			break;
		    }

		case 3: {
			cout << "make a call to the to Calculate the value of x to power n" << endl;
			break;
		   }

		case 4: {
			cout << " Swap the contents of two variables " << endl;
			break;
		   }

		case 5: {
			cout << " Exit the testing framewok " << endl;
			break;
		   }
		default :{
			cout << " Exit if there are maching option " << endl;
		  }
		}


	} while (option != 5); 
	
}

