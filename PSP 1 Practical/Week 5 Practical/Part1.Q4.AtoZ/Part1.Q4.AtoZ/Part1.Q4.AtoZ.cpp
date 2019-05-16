// Part1.Q4.AtoZ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char acharacter = 'A', zcharacter = 'Z';
	char alpha;

	for (int i = acharacter; i <= zcharacter; i++) {

		alpha = (char)i;

		cout << alpha << endl;

	}
	return 0;
}

