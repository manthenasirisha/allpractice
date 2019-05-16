// functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "PracticalOneHeader.h"
using namespace std;



int main()
{
   //Q1
	
	displaymessage();

	//Q2

	int date, month, year;

	cout << " Enter the date and month and year with space :";
	cin >> date >> month >> year;

	int datemonthyear = compressDate(date, month, year);

	cout << " Compress Date is :"<< datemonthyear << endl;

	//Q3

	int x1, x2, x3;

	cout << " Enter x1 and x2 and x3 with space :";
	cin >> x1 >> x2 >> x3;

	int minNumber = minimumNum(x1, x2, x3);

	cout << " minimum number is :" << minNumber << endl;

	// Q4

	int X1, X2, X3;

	cout << " Enter the x1 and x2 and x3 with space : ";
	cin >> X1 >> X2 >> X3;

	int greaterNum = greatestnum(X1, X2, X3);

	cout << " Greatest Number is :" << greaterNum << endl;

	//Q5

	int number;

	cout << " Enter the Number : ";
	cin >> number;

	int result = isEven(number);

	cout << " Check Number is Even or Not: " << result << endl;

	//Q6

	int number1;

	cout << " Enter the Number : ";
	cin >> number1;

	int positive = isPositive(number1);

	cout << " Check Number is Positive or Not : " << positive << endl;

	//Q7 1A
	int n;

	cout << " Enter the Number : ";
	cin >> n ;
	drawpatternsOneA(n);
	cout << endl;
	

	//Q7 2B

	int n1;

	cout << " Enter the Number :";
	cin >> n1;

	drawpatternsTwoB(n1);
	//Q7 3C
	drawpatternsThreeC(9);
}



