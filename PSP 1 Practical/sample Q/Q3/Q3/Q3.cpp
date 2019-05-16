// Q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main() 
{
	int n;
	float p = 0;

	cout << "Enter N value :";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i == 1) {
			p = p + 1;
		}
		else {
			p = p + ((i - 1) * 1.0)/ i;
		}
		cout << " p value is " << p << endl;
	}

return 0;
}

