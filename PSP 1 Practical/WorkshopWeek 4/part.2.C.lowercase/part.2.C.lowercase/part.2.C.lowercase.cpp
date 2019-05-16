// part.2.C.lowercase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char c;

	cout << "Enter char";
	cin >> c;

	if (c >= 'A' && c <= 'Z') {
		cout << "Upper letter";
	}
	else if (c >= 'a' && c <= 'z') {
		cout << "Lower letter";
	}
	else if (c >= '0' && c <= '9') {
		cout << "digit";
	}
	else {
		cout << "not digit or a letter";
	}
		cout << endl;

	return 0;

}

