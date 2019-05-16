// h.2integersMonthAndYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main(){

    int month, year;

    cout << " Enter the month :";
    cin >> month;
	cout << " Enter the year :";
	cin >> year;

    if (month == 1 || month == 3 
		|| month == 5 || month == 7 
		|| month == 8 || month == 10 
		|| month == 12) {
	 cout << " 31 days ";
   }
	else if (month == 2) {
		if ((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0)) {
			cout << "29 days";
		}
		else {
			cout << "28 days";
		}
	}
	

}

