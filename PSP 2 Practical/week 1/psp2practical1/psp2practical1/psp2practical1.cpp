// psp2practical1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void displayTheMessage();
int compressDate(int, int, int);
int minimumNumber(int, int, int);
bool iseven(int);
bool isPositive(int);
void drawPatternsOneA(int);
void drawPatternsTwoB(int);
void drawPatternsThreeC(int);

int main()
{
	/*//Q1
	displayTheMessage();

	//Q2
	int date, month, year;

	cout << " Enter the date and month and year with space :";
	cin >> date >> month >> year;

	int datemonthyear = compressDate(date, month, year);

	cout << datemonthyear << endl;

	//Q3
	int x1, x2, x3;

	cout << " Enter the x1 and x2 and x3 with space :" ;
	cin >> x1 >> x2 >> x3;

	int minNumber = minimumNumber(x1, x2, x3);

	cout << " Minimum Number is : " << minNumber << endl;

	//Q5
	int number;

	cout << " Enter the Number : ";
	cin	>> number;

	bool even = iseven(number);

	cout << even << endl;

	//Q6
	int number1;

	cout << " Enter the number : ";
	cin >> number1;

	bool positive = isPositive(number);

	cout << positive << endl;
	*/

	//Q7 1A
	int n;

	cout << " Enter the Number ";
	cin >> n;

	 drawPatternsOneA(n);
	 cout << endl;

	//Q7 2B
	 int num;

	 cout << " Enter the Number :";
	 cin >> num;

	 drawPatternsTwoB(num);

	 //Q7 3C
	 int number;

	 cout << " Enter the Number :";
	 cin >> number;

	 drawPatternsThreeC(number);
	 
	
}

//Q1
void displayTheMessage()
{
	cout << "******************************"<< endl;
	cout << "   Welcome to PSP II course "<< endl;
	cout << "******************************" << endl;
}
//Q2
int compressDate(int date, int month, int year)
{
	int datemonth, datemonthyear;

	datemonth = date * 100 + month;
	datemonthyear = datemonth * 100 + year;

	return datemonthyear;
}
//Q3
int minimumNumber(int x1, int x2, int x3)
{
	int minNum;
	if (x1 < x2 && x1 < x3) {
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
//Q5
bool iseven(int number) {

	if (number % 2 == 0) {
		return true;
	}
	else {
		return false;
	}

}
//Q6
bool isPositive(int number) {

	if (number >= 0) {
		return true;
	}
	else {
		return false;
	}
}
//Q7 1A
void drawPatternsOneA(int n)
{
	for (int i = 1; i <= n; i++) {

		cout << endl;

		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
	}
	
}
//Q7 2B
void drawPatternsTwoB(int num) {

	int rows = 2 * num - 1;
	int spaces = 0;
	int stars = 0;

	for (int i = 1; i <= rows; i++) {
		if (i <= num) {
			spaces = num - i;
			stars = i;
			
		}
		else {
			spaces = i - num;
			stars = 2 * num - i;
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
void drawPatternsThreeC(int number) {
	int rows = number;
	int spaces = 0;
	int stars = 0;
	bool increment = true;

	for (int i = 1; i <= rows; i++) {
		if (number / 2 == spaces) {
			increment = false;
		}
		stars = number - 2 * spaces;

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

