// assignementMain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "assignmentHeader.h"
using namespace std;

int main()
{
	clearTimeTable();

	int time, day;
	string subject, lucturer, roomNumber;
	cout << "Enter the time and day and subject and lucturer and room number ";
	cin >> time >> day >> subject >> lucturer >> roomNumber;
	
	insertTimeTable(day , time , subject, lucturer, roomNumber);

	showTimeTable(day, time);

	cout << " time is " << time;
	cout << " day is " << day;
	
}


