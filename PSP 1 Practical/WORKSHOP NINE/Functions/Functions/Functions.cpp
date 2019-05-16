// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "mylib.h"
using namespace std;

int main()
{
	/*int a = 5;
	int b = 7;

	cout << " A value is : " << a << " before Swap " << endl;
	cout << " B value is : " << b << " before Swap " << endl;

	swapValues(a, b);

	cout << " A value is : "<< a << " after Swap "  << endl;
	cout << " B value is : "<< b << " after Swap "  << endl;*/

	float temp;

	cout << " ENter the fheat temperature :";
	cin >> temp;

	 temp = convertTemp(temp);

	cout << " fheat temp in celcisus is :" << temp << endl;
}

