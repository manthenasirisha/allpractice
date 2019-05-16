// Part1.Q.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int calculateTheAbsoluteValue(float);// 
char calculateTheUndergraduateGrade(float);
int calculateTheMax(int,int);


int main()
{//Q.1
	float realNum;
	
	

	cout << "enter a real number";
	cin >> realNum;
	

	int absoluteNumber = calculateTheAbsoluteValue(realNum);

	cout << "absoluteNumber:" << absoluteNumber;

	//Q.2
	float marks;
    cout << "Enter the marks";
	cin >> marks;


	char undergrade = calculateTheUndergraduateGrade(55);

	cout << "under graduate grade is :" << undergrade;

	//Q.3
	int number1, number2;

	cout << "Enter two integer numbers with space";
	cin >> number1 >> number2;


	int maximum = calculateTheMax(number1,number2);

	cout << "maximum nember is :" << maximum;

}
//Q.1
int calculateTheAbsoluteValue(float realNumber) {

	int absoluteNum;

	absoluteNum = realNumber;

	return absoluteNum;

}
//Q.2
char calculateTheUndergraduateGrade(float marks) {

	char grade;

	if (marks >= 70) {
		grade = 'A';
	}
	else if (marks >= 60) {
		grade = 'B';
	}
	else if (marks >= 50) {
		grade = 'C';
	}
	else {
		grade = 'D';
	}

	return grade;
}
//Q.3
int calculateTheMax(int number1,int number2) {

	int maximum;

	if (number1 > number2) {
		maximum = number1;
	}
	else {
		maximum = number2;
	}

	return maximum;
}





