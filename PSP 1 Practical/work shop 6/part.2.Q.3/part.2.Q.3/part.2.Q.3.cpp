// part.2.Q.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
  
	int c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15;
	float a;
	cout << "enter 15 integers: ";
	cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6;
	cin >> c7 >> c8 >> c9 >> c10 >> c11 >> c12 >> c13 >> c14 >> c15;
	a = (c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8 + c9 + c10 + c11 + c12 + c13 + c14 + c15) / (float)15;
	cout << "average = " << a << endl;
	return 0;
}

