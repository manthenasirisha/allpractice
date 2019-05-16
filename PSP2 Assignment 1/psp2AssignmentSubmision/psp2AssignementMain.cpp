// psp2AssignementMain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "psp2AssignmentHeader.h"
#include "psp2AssignmentExtraHeader.h"
using namespace std;

int main()
{
	int day, hour, term;
	string subject, lecturer, roomNumber;
	char option;
	

	do {

		cout << " Enter the day (0 for mon, 1 for tue, 2 for wed 3  for thrus 4 for fri )";
		cin >> day ;
		cout << " Enter the hour (0 for(9:00 AM), till 8 for (5:00PM) )";
		cin >> hour;
		cout << " Enter the subject : " ;
		cin >> subject;
		cout << "Enter the lecturer : ";
		cin >> lecturer;
		cout << " Enter the room Number : ";
		cin >> roomNumber;

		insertTimeTable(day, hour, subject, lecturer, roomNumber);

		cout << " DO you Want to contuniue with next cell (Y for (yes) N for (no))";
		cin >> option;
	} while (option == 'Y');


	showEntireTimetable();

	clearTimetable();
	
	
	cout << "After clean the table";

	showEntireTimetable();
	


	do {

		cout << " Enter the term(0 for winter, 1 for spring,  2 for summer, and 3 for autumn)";
		cin >> term;
		cout << " Enter the day (0 for mon, 1 for tue, 2 for wed 3  for thrus 4 for fri )";
		cin >> day;
		cout << " Enter the hour (0 for(9:00 AM), till 8 for (5:00PM) )";
		cin >> hour;
		cout << " Enter the subject : ";
		cin >> subject;
		cout << "Enter the lecturer : ";
		cin >> lecturer;
		cout << " Enter the room Number : ";
		cin >> roomNumber;

		insertTimeTableTerm(term, day, hour, subject, lecturer, roomNumber);

		cout << " DO you Want to contuniue with next cell (Y for (yes) N for (no))";
		cin >> option;
	} while (option == 'Y');


	showEntireTimetableTerm();

	cout << "After clean the table";
	clearTimetableTerm();

	cout << " Entire Time Table For Term ";
	showEntireTimetableTerm();

	cout << " Show Free Hours for Term ";
	showFreeHoursTerm();
}


