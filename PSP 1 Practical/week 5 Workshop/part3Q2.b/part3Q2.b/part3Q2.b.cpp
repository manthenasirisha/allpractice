// part3Q2.b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int x = 1;

	while (x <= 20) {
	
		cout << x << " ";
		if (x % 5 == 0) {
			cout << endl;
		}
		x++;
	}


	return 0;
}
