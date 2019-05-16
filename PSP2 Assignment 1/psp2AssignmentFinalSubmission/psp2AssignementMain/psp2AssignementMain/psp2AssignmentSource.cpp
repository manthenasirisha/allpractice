#include "pch.h"
#include <iostream>
#include <string>
#include "psp2AssignmentHeader.h"
using namespace std;

struct TimeTableCell
{
	string subject;
	string lecturer;
	string roomNumber;

	// flag to represent if a cell is free
	bool isFree = true;
};

TimeTableCell timeTable[5][9];

//--------------------------------------------------------
// Function name: clearTimetableTerm
// clears the all time table form all terms.
//--------------------------------------------------------
void clearTimetable() {
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 8; j++) {
			timeTable[i][j].lecturer = "";
			timeTable[i][j].roomNumber = "";
			timeTable[i][j].subject = "";
			timeTable[i][j].isFree = true;
		}
	}
}

//--------------------------------------------------------
// Function name: insertTimeTable
// input parameters
//   @parm2: day 
//   @parm3: hour
//   @parm4: subject
//   @parm5: lecturer
//   @parm6: roomNumber
//--------------------------------------------------------
void insertTimeTable(int day, int hour, string subject, string lecturer, string roomNumber) {
	timeTable[day][hour].lecturer = lecturer;
	timeTable[day][hour].roomNumber = roomNumber;
	timeTable[day][hour].subject = subject;
	timeTable[day][hour].isFree = false;
}

//--------------------------------------------------------
// Function name:showTimeTable
// input parameters
//   @parm2: day
//   @parm2: hour
//--------------------------------------------------------
void showTimeTable(int day, int hour) {
	cout << hour + 9 << ", " << timeTable[day][hour].subject  << ", " << timeTable[day][hour].lecturer << ", " << timeTable[day][hour].roomNumber;
}

//--------------------------------------------------------
// Function name:showEntireTimetable
//--------------------------------------------------------
void showEntireTimetable() {
	string day;
	for (int i = 0; i <= 4; i++) {
		cout << "-----------------" << endl;
		if (i == 0) {
			day = "monday";
		}
		else if (i == 1) {
			day = "tuesday";
		}
		else if (i == 2) {
			day = "wednesday";
		}
		else if (i == 3) {
			day = "thrusday";
		}
		else if (i == 4) {
			day = "friday";
		}
		cout << day << endl;
		for (int j = 0; j <= 8; j++) {
			showTimeTable(i, j);
			cout << endl;
		}
	}
}

//--------------------------------------------------------
// Function name: showfreeHoursTerms
//--------------------------------------------------------
void showFreeHours() {
	string day;

	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 8; j++) {
			cout << "-----------------" << endl;
			if (timeTable[i][j].isFree == true) {

				if (i == 0) {
					day = "monday";
				}
				else if (i == 1) {
					day = "tuesday";
				}
				else if (i == 2) {
					day = "wednesday";
				}
				else if (i == 3) {
					day = "thrusday";
				}
				else if (i == 4) {
					day = "friday";
				}

				cout << j + 9 << " hour of " << day << " is free" ;
			}
		}
	}
}