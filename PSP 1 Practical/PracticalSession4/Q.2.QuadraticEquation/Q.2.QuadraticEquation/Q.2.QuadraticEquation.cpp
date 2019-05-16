// Q.2.QuadraticEquation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	float a, b, c;
	int   x1, x2;
	float discriminant;

	cout << "enter a value for a, b and c (separate by space):";
	cin >> a >> b >> c;

	discriminant = ((b * b) - (4 * a * c));

	if (discriminant < 0) {

		cout << " there no real roots ";
	}

	if (discriminant == 0) {

		x1 = (-b) / (2 * a);

		cout << "one of the root is " << x1;
	}

	else {

		x1 = ((-b) + sqrt(b*b - 4 * a*c)) / (2 * a);
		x2 = ((-b) - sqrt(b*b - 4 * a*c)) / (2 * a);

		cout << "root1 = " << x1 << " and root2 = " << x2 << endl;

	}



	return 0;

}

