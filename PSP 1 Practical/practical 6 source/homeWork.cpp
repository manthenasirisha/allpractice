// homeWork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	int width, height,number;
	cout << "Enter the nuber :";
	cin >> number;

	height = number * 2 + 1;
	width = number;

	for (int j = 0; j < height; j++) {
		cout << endl;
		if (j < number ) {
			width = j;
		}
		else if (j > number) {
			width = (2 * number)  - j;
		}
		else {
			width = number;
		}
		for (int i = 0; i <= width; i++) {
			 
			cout << i;
			
		}
	}
	cout << endl;
	return 0;
}


