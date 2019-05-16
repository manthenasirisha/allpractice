// part3Q.a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int A = 5;
	int B = 90;

	do {
		B = B / A - 5;
		if (B > A)
			B = A + 30;
	} while (B >= 0); 

		cout << A << B;

return 0;
}
