#include "pch.h"
#include <iostream>
#include <string>
#include "psp2AssignmentExtraHeader.h"
using namespace std;

struct TimeTableCell
{
	string subject;
	string lecturer;
	string roomNumber;

	// flag to represent if a cell is free
	bool isFree = true;
};

TimeTableCell timeTable[4][5][9];

//--------------------------------------------------------
// Function name: clearTimetableTerm
// clears the all time table form all terms.

//--------------------------------------------------------
void clearTimetableTerm() {
	for (int i = 0; i <= 3; i++) {
		for (int j = 0; j <= 4; j++) {
			for (int k = 0; k <= 8; k++) {
				timeTable[i][j][k].lecturer = "";
				timeTable[i][j][k].roomNumber = "";
				timeTable[i][j][k].subject = "";
				timeTable[i][j][k].isFree = true;
			}
		}
	}
}

//--------------------------------------------------------
// Function name: insertTimeTableTerm
// input parameters
//   @parm1: term 
//   @parm2: day 
//   @parm3: hour
//   @parm4: subject
//   @parm5: lecturer
//   @parm6: roomNumber
//--------------------------------------------------------
void insertTimeTableTerm(int term, int day, int hour, string subject, string lecturer, string roomNumber) {
	timeTable[term][day][hour].lecturer = lecturer;
	timeTable[term][day][hour].roomNumber = roomNumber;
	timeTable[term][day][hour].subject = subject;
	timeTable[term][day][hour].isFree = false;
}

//--------------------------------------------------------
// Function name:showTimeTableTerm
// input parameters
//   @parm1: term
//   @parm2: day
//   @parm2: hour

//--------------------------------------------------------
void showTimeTableTerm(int term, int day, int hour) {
	cout << hour + 9 << ", " << timeTable[term][day][hour].subject << ", " << timeTable[term][day][hour].lecturer << ", " << timeTable[term][day][hour].roomNumber;
}

//--------------------------------------------------------
// Function name:showEntireTimetableTerm
//--------------------------------------------------------

void showEntireTimetableTerm() {
	string day;
	string term;

	for (int i = 0; i <= 3; i++) {
		cout << "-----------------" << endl;
		if (i == 0) {
			term = "winter";
		}
		else if (i == 1) {
			term = "spring";
		}
		else if (i == 2) {
			term = "summer";
		}
		else if (i == 3) {
			term = "autumn";
		}
		
		cout << term << endl;

		for (int j = 0; j <= 4; j++) {
			cout << "-----------------" << endl;
			if (j == 0) {
				day = "monday";
			}
			else if (j == 1) {
				day = "tuesday";
			}
			else if (j == 2) {
				day = "wednesday";
			}
			else if (j == 3) {
				day = "thrusday";
			}
			else if (j == 4) {
				day = "friday";
			}
			cout << day << endl;
			for (int k = 0; k <= 8; k++) {
				showTimeTableTerm(i, j, k);
				cout << endl;
			}
		}
	}
}

//--------------------------------------------------------
// Function name: showfreeHoursTerms
//--------------------------------------------------------
void showFreeHoursTerm() {
	string day;
	string term;

	for (int i = 0; i <= 3; i++) {
		cout << "-----------------" << endl;
		if (i == 0) {
			term = "winter";
		}
		else if (i == 1) {
			term = "spring";
		}
		else if (i == 2) {
			term = "summer";
		}
		else if (i == 3) {
			term = "autumn";
		}

		for (int j = 0; j <= 4; j++) {

			if (j == 0) {
				day = "monday";
			}
			else if (j == 1) {
				day = "tuesday";
			}
			else if (j == 2) {
				day = "wednesday";
			}
			else if (j == 3) {
				day = "thrusday";
			}
			else if (j == 4) {
				day = "friday";
			}

			for (int k = 0; k <= 8; k++) {
				if (timeTable[i][j][k].isFree == true) {
					cout << j + 9 << " hour of " << day << " in " << term << " is free" << endl; 
				}
			}
		}
	}
}