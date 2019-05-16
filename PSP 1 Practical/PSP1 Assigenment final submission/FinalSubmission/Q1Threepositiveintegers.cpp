//Author : SIRISHA PENMETSA
//Date : 20/03/2019

// Q.1.a.3positiveintegers.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Question 1.A
---------------------------------------------------------------------------------------------------------------------

1.a)
Read 3 positive integer numbers representing for the day, month and year.Then, the  
program will display the remain days of that month and the day of the year.Remember 
to check if that year is a leap year .

---------------------------------------------------------------------------------------------------------------------
ANALYSIS :

The program reads three integers day, month and year from the user and outputs
The remaining days of the given month
The day of the year

As the program needs to take in to consideration if the year is a leap year, the output calculation differs based on the input year

Example 1: Leap year

For the input 14 - 02 - 2020
The remaining days will be : 15
The day of the year will be : 45


Example 2 : Non Leap Year

For the input 14 - 02 - 2019
The remaining days will be : 14
The day of the year will be : 45 .*/

/*
PSEUDOCODE:

START

1) Read the value of the inputs day, month and year into day, month and year respectively
2) Check if the year is leap year
let isLeapYear = false
if year is exactly divided by 400 OR
year is exactly divided by  4  AND year is not exactly divided by 100
then isLeapYear = true;

3) Calculate remaining days and day of the year

if (isLeapYear and month is feb)
Then remainingDays = 29 - day;
else if (month is feb)
Then remainingDays = 28 - day;
else if(month is jan or march or may or july or august or october or december)
Then remianingDays = 31 - day
else 
 remianingDays = 30 - day


let dayOfTheYear = 0
let i = 1
while i is less than month
if i is 2 and isLeapYear
dayOfTheYear = dayOfTheYear + 29;
else if i is 2 and not isLeapYear
dayOfTheYear = dayOfTheYear + 28;
else if i is 1 OR 3 OR 5 OR 7 OR  8 OR 10 OR 12
dayOfTheYear = dayOfTheYear + 31;
else
dayOfTheYear = dayOfTheYear + 30;

increment i
end while

dayOfTheYear = dayOfTheYear + day;

print remainingDays
print dayOfTheYear

END
*/
//Q1.b
/*
1.b)
Then, read 3 other integer numbers as another day, month and year. The program will find the difference in days between 2 date


Analysis :

The program reads another three integers day, month and year from the user and outputs
1)	The number of days between this date and the earlier date.



 Example 1:


For the input of the dates 10-02-2019 and 21-03-2025
the output of  the number of days between the dates are : 2,231


________________________________________

PseudoCode:
START
	1) Read the date one input day, month and year into day1, month1 and year1 respecively
	2) Read the date two input day, month and year into day2, month2 and year2 respecively
	3) Calculate the number of days
	   let totalNumberOfDaysBetweenTheDates = 0


	   calculate dayOfTheYear1 using the algorithm given in 1a

	   if year1 is a leap  year
		then remainingDaysInYear1 =  366  - dayOfTheYear1;
		else
		then remainingDaysInYear1 =  365  - dayOfTheYear1;

		totalNumberOfDaysBetweenTheDates = totalNumberOfDaysBetweenTheDates + remainingDaysInYear1;

	   calcudate dayOfTheYear2 using the algorithm given in 1a

	   totalNumberOfDaysBetweenTheDates = totalNumberOfDaysBetweenTheDates + dayOfTheYear2;

	   let i = year1 + 1
	   while i is less than or equal to year2 - 1
		if i is a leap year
			then  totalNumberOfDaysBetweenTheDates = totalNumberOfDaysBetweenTheDates + 366
		else
			totalNumberOfDaysBetweenTheDates = totalNumberOfDaysBetweenTheDates+ 365

		incrment i by 1
	   end while

	   print totalNumberOfDaysBetweenTheDates


END

*/
// Author : Sirisha penmetsa
// Date : 20/03/2019

#include "pch.h"
#include <iostream>
using namespace std;

bool isALeapYear(int);
int calculateTheRemainingDays(int, int, int);
int calculateThedayOfTheYear(int, int, int);
int calculateTheDifferenceInDaysBetweenTwoDates(int, int, int, int, int, int);

int main()
{//Q1.a
	int day, month, year;
	int remainingDays, dayOfTheYear;

	cout << "Enter the day, month and year with space : ";
	cin >> day >> month >> year;
	cout << endl;

	 remainingDays = calculateTheRemainingDays(day, month, year);
	 dayOfTheYear = calculateThedayOfTheYear(day, month, year);
	

	cout << "remaining days" << remainingDays << endl;
	cout << "dayof the year" << dayOfTheYear;
	cout << endl;
//Q1.b
	int day2, month2, year2;

	cout << " Enter the day2 and month2 and year2 with space(year 2 should be greater than year1) :";
	cin >> day2 >> month2 >> year2;
    cout << endl;

	int numberofDaysBetween = calculateTheDifferenceInDaysBetweenTwoDates(day, month, year, day2, month2, year2);

	cout << " Difference in days between 2 dates : " << numberofDaysBetween << endl;
}
//Q1.a
bool isALeapYear(int year) {

	bool isLeapYear = false;

	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {

		isLeapYear = true;

	}
	return isLeapYear;

}

int calculateTheRemainingDays(int day, int month, int year) {

	int remainingDays;

	bool isLeapYear = isALeapYear(year);

	if (month == 2 && isLeapYear) {
		remainingDays = 29 - day;
	}
	else if (month == 2 && !isLeapYear) {
		remainingDays = 28 - day;
	}
	else if (month == 1 || month == 3 || month == 5 ||
		month == 7 || month == 8 || month == 10 || month == 12) {
		remainingDays = 31 - day;
	}
	else {
		remainingDays = 30 - day;
	}

	return remainingDays;
}

int calculateThedayOfTheYear(int day, int month, int year) {

	bool isLeapYear = isALeapYear(year);
	int dayOfTheYear = 0;

	for (int i = 1; i < month; i++) {

		if (i == 2 && isLeapYear) {
			dayOfTheYear = dayOfTheYear + 29;
		}
		else if (i == 2 && !isLeapYear) {
			dayOfTheYear = dayOfTheYear + 28;
		}
		else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			dayOfTheYear = dayOfTheYear + 31;
		}
		else {
			dayOfTheYear = dayOfTheYear + 30;
        }
	}

	dayOfTheYear = dayOfTheYear + day;

	return dayOfTheYear;
}
//Q1.b
int calculateTheDifferenceInDaysBetweenTwoDates(int date1, int month1, int year1, int date2, int month2, int year2) 
{
	int remainingDaysInYear1 ;
	int totalNumberOfDaysBetweenTheDates = 0;
	int dayOfTheYear2;

	if (isALeapYear(year1)) {
		remainingDaysInYear1 = 366 - calculateThedayOfTheYear(date1, month1, year1);
		
	}
	else {
		remainingDaysInYear1 = 365 - calculateThedayOfTheYear(date1, month1, year1);
	}
	
	for (int i = year1 + 1; i <= year2 - 1; i++) {
		if (isALeapYear(i)) {
			 totalNumberOfDaysBetweenTheDates = totalNumberOfDaysBetweenTheDates + 366;
		}
		else {
			totalNumberOfDaysBetweenTheDates = totalNumberOfDaysBetweenTheDates + 365;
		}
	}
	dayOfTheYear2 = calculateThedayOfTheYear(date2, month2, year2);

	totalNumberOfDaysBetweenTheDates = remainingDaysInYear1 + totalNumberOfDaysBetweenTheDates + dayOfTheYear2;

	return totalNumberOfDaysBetweenTheDates;

}



