// HomeWork.oddnumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int count = 0;
    int lastDigit;
    bool contains5;

for (int i = 100; i <= 999; i++) {

	int temp = i;
	contains5 = false;
	while (temp != 0) {
		lastDigit = temp % 10;

		if (lastDigit == 5) {
		contains5 = true;
		break;
		}
		temp = temp / 10;
	}

	if ((i % 2 != 0) && (contains5)) {
	count++;
	}
}

cout << "count:" << count << endl;

return 0;

}

