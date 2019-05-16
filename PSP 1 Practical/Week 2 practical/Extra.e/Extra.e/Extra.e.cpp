// Extra.e.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	int x1, x2, y1, y2;
	float distanceBetweenPoints;

	cout << "enter x of point 1 : ";
	cin >> x1;
	cout << "enter y of point 1: ";
	cin >> y1;
	cout << "enter x of point 2 : ";
	cin >> x2;
	cout << "enter y of point 2 : ";
	cin >> y2;

	distanceBetweenPoints = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

	cout << "Distance Between Points is" << distanceBetweenPoints;
	return 0;
}


