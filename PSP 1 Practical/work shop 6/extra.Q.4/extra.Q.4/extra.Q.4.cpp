// extra.Q.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number;
	int sum1 = 0;
	int count = 0;
	float mean;
	int sum2 = 0;
	float variance;


	cout << " Enter the numbers with space :";
	//cin >>

		// 1 4 5 6 7  4 5
		char ch;
		do {
		   // read the number
			cin >> number;
			sum1 = sum1 + number;
			count = count + 1;
			sum2 = sum2 + number * number;
			ch = getchar();
		  // some thing
		} while (ch != '\n');

		cout << "sum is :" << sum1 << endl;

		mean = (sum1 * 1.0) / count;

		cout << "Mean is :" << mean << endl;

		variance = (1.0 * (sum2 - mean) * (sum2 - mean)) / (count - 1);

		cout << " variance is :" << variance << endl;

		



}


