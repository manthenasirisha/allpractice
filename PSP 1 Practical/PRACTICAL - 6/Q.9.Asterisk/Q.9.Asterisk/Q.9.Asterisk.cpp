// Q.9.Asterisk.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int  width, height;

	cout << "Enter the width :";
	cin >> width;
	cout << " Enter the height :";
	cin >> height;

	for (int j = 1; j <= height; j++) {
		cout << endl;
		for (int i = 1; i <= width; i++) {
			if (j == 1 || i == 1 || j == height || i == width) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
	}
	cout << endl;

}


