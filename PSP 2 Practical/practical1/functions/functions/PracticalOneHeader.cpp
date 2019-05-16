#include "pch.h"
#include <iostream>
using namespace std;

//Q1

/*--------------------------------------------------------
Function name: displaymessage
Funtion return: void
--------------------------------------------------------*/

void displaymessage() {

	cout << "******************************" << endl;
	cout << "  Welcome to PSP II course  " << endl;
	cout << "******************************" << endl;
}

//Q2

/*--------------------------------------------------------
 Function name: compressDate
 input parameters
	@param date: day of the given date
	@param month: month of the given month
	@param year: year of the given year
@return datemonthyear: The given date as combined format
--------------------------------------------------------*/
int compressDate(int date, int month, int year) {

	int datemonth, datemonthyear;

	datemonth = date * 100 + month;
	datemonthyear = datemonth * 100 + year;

	return datemonthyear;
}

//Q3

/*--------------------------------------------------------
 Function name: minimumNum
 input parameters
   @param x1 : some integer number
   @param x2 : some integer number
   @param x2 : some integer number

  @return minNum : minimum number of given three numbers
 
--------------------------------------------------------*/

int minimumNum(int x1, int x2, int x3) {

	int minNum;

	if (x1 < x2 &&  x1 < x3) {
		minNum = x1;
	}
	else if (x2 < x3) {
		minNum = x2;
	}
	else {
		minNum = x3;
	}
	return minNum;
}

//Q4

/*--------------------------------------------------------
 Function name: greatestnum
 input parameters
   @param x1 : some integer number
   @param x2 : some integer number
  @param x3 : some integer number

  @return greaterNum : greatest number of given three numbers
 
--------------------------------------------------------*/

int greatestnum(int X1, int X2, int X3) {

	int greaterNum;

	if (X1 > X2 && X1 > X3) {
		greaterNum = X1;
	}
	else if (X2 > X3) {
		greaterNum = X2;
	}
	else {
		greaterNum = X3;
	}
	return greaterNum;
}

//Q5

/*--------------------------------------------------------
 Function name: isEven
input parameters
 @param number : some integer number
  
 @return  : return true if it's even number, false if it's odd number

--------------------------------------------------------*/

bool isEven(int number) {

	if (number % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

//Q6

/*--------------------------------------------------------
 Function name: isPositive
 input parameters
   @param  number : some integer number

  @return : return true if it's positive number, else return false
 
--------------------------------------------------------*/

bool isPositive(int number) {

	if (number >= 0) {
		return true;
	}
	else {
		return false;
	}

}

//Q7 1A
/*--------------------------------------------------------
 Function name: drawpatternsOneA
 input parameters
  @param n : some integer number
   
 
 @return : void
 
--------------------------------------------------------*/

void drawpatternsOneA(int n) {

	for (int i = 1; i <= n; i++) {
		cout << endl;

		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
	}
}

//Q7 2B
/*--------------------------------------------------------
 Function name: drawpatternsTwoB
 input parameters
   @param n : some integer number
   
  @return: void
 
--------------------------------------------------------*/

void drawpatternsTwoB(int n) {

	int rows = 2 * n - 1;
	int stars = 0, spaces = 0;

	for (int i = 1; i <= rows; i++) {

		if (i <= n) {
			spaces = n - i;
			stars = i;
		}
		else {
			spaces = i - n;
			stars = 2 * n - i;
		}

		for (int j = 1; j <= spaces; j++) {
			cout << " ";
		}

		for (int k = 1; k <= stars; k++) {
			cout << "*";
		}
		cout << endl;
	}

}

//Q7 3C

/*--------------------------------------------------------
Function name: drawpatternsTwoC
input parameters
  @param n: some integer number
  
  @return: void

--------------------------------------------------------*/

void drawpatternsThreeC(int n) {
	int rows = n;
	int stars = 0;
	int spaces = 0;
	bool increment = true;
	for (int i = 1; i <= rows; i++) {

		if (n / 2 == spaces) {
			increment = false;
		}

		stars = n - 2 * spaces;

		for (int j = 1; j <= spaces; j++) {
			cout << " ";
		}

		for (int k = 1; k <= stars; k++) {
			cout << "*";
		}
		cout << endl;

		if (increment) {
			spaces++;
		}
		else {
			spaces--;
		}
	}
}