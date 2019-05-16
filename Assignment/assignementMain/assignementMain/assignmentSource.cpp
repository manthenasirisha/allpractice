#include "pch.h"
#include <iostream>
#include <string>
#include "assignmentHeader.h"
using namespace std;

struct TimeTableCell
{
	string subject;
	string lecturer;
	string roomNumber;
};
TimeTableCell timeTable[9][5];

void clearTimeTable() {
	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 4; j++) {
			timeTable[i][j].subject = "";
			timeTable[i][j].lecturer = "";
			timeTable[i][j].roomNumber = "";
		}
	}
}
void insertTimeTable(int day, int time, string subject, string lecturer, string roomNumber) {
	timeTable[day][time].subject = subject;
	timeTable[day][time].lecturer = lecturer;
	timeTable[day][time].roomNumber = roomNumber;
}
void showTimeTable(int day, int time) {
	cout << "subject is : " << timeTable[day][time].subject;
	cout << "lecturer is :" << timeTable[day][time].lecturer;
	cout << "room Number is :" << timeTable[day][time].roomNumber;
}
void showEntrieTimeTable() {

}