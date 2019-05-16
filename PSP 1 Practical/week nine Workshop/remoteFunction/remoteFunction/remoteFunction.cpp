// remoteFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "mylib.h"
using namespace std;


int main()
{
	int a = 5;
	int b = 8;

	cout << " A value is : " << a << " before swap " << endl;
	cout << " B value is : " << b << " before swap " << endl;

	swapValues(a, b);

	cout << " A value is : " << a << " after swap " << endl;
	cout << " B value is : " << b << " after swap " << endl;
}


