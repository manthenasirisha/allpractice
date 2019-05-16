// Q.3.D.finalMarks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	int marks;

	cout << " Enter the marks ";
	cin >> marks;

	if (marks >= 70) {

		cout << "first class ";
	}
	else if (marks >= 60) {

		cout << "2.1";
	}
	else if (marks >= 50) {

		cout << "2.11";
	}
	else if (marks >= 40) {

		cout << "3rd";
	}
	else if (marks < 40) {

		cout << "fail";
	}

	cout << endl;

	return 0;
}

