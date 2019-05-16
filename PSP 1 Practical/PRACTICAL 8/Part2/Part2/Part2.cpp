// Part2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "Q1remotefunction.h"
using namespace std;


int main()

{
	int option;
	cout << "Welcome to my library tester program" << endl;

	do {
		cout << " Please choose one option below :" << endl;
		cout << "1.calculate the surface area of a close cylinder;" << endl;
		cout << "2. Categorise age into an age group (young, adult, senior)" << endl;
		cout << "3.Calculate the value of x to power n" << endl;
		cout << "4.Swap the contents of two variables;" << endl;
		cout << "Exit the testing framework" << endl;
		cout << "please enter an option :" << endl;
		cin >> option;

		switch (option) {
		case 1: {

			float leangth, diameter;

			cout << "Enter the leangth and with with space :";
			cin >> leangth >> diameter;

			float surfaceArea = calculateTheSurfaceArea(leangth, diameter);

			cout << "surface area is : " << surfaceArea;
			cout << endl;


			break;
		}
		case 2: {

			int age;
			int senior, adult, young;

			cout << " Enter the Age :";
			cin >> age;

			string category = categoriseAgeIntoAnAgeGroup(age);

			std::cout << " Person is " << category;
			break;
		}
		case 3: {
			int x, n;

			cout << " Enter the value of X : ";
			cin >> x;
			cout << " Enter the value of N : ";
			cin >> n;

			int value = calculateTheValueOfXpowerN(x, n);

			cout << " The result " << x << " to power " << n << " is :" << value;
			break;
		}
		case 4: {
				int number1, number2; 

				cout << " Enter the value of A and value of B with space : ";
				cin >> number1 >> number2;
				Swapvalues(number1, number2);

				cout << " value A is " << number1;
				cout << " value B is " << number2;
				break;
		}
		case 5: {
			cout << " Exit the testing framewok " << endl;
			break;
		}
		default: {
			cout << " Exit if there are maching option " << endl;
		}
		}


	} while (option != 5);

}





