// Part.3.Q.1UniversitiesInUS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int subAhours, subBhours, subChours, subDhours, subEhours;
	float GPA;
	int numberOfstudents;

	cout << "Number of students :";
	cin >> numberOfstudents;

	for (int i = 1; i <= numberOfstudents; i++) {

		cout << "Enter Number of hours for subject A :";
		cin >> subAhours;
		cout << "Enter Number of hours for subject B :";
		cin >> subBhours;
		cout << "Enter Number of hours for subject C :";
		cin >> subChours;
		cout << "Enter Number of hours for subject D :";
		cin >> subDhours;
		cout << "Enter Number of hours for subject E:";
		cin >> subEhours;


		GPA = ((subAhours * 4.0) + (subBhours * 3.0) + (subChours * 2.0) + (subDhours * 1.0)) / (subAhours + subBhours + subChours + subDhours + subEhours);

		cout << GPA;
		cout << endl;

	}

}

