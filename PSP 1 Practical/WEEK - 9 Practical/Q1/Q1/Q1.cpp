// Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int someFunction(bool);
void calculateThesumAndarageve();
string checkVowelORConsonant(char);
void countTheVowelsAndLetters();
void  displayAsequenceOfNumber(int, int);
string printsTheSeasonForThatMonthAndDay(int, int);

int main()
{
	//Q1
	cout << someFunction(false) << endl;
	//Q2
	calculateThesumAndarageve();
	//Q3
	char letter;
	cout << " Enter the letter :";
	cin >> letter;

	cout << letter << " is " << checkVowelORConsonant(letter) << endl;
	//Q4
	countTheVowelsAndLetters();
	 //Q5
	 int number1, number2;

	 cout << " Enter the number1 and number2 with space : ";
	cin >> number1 >> number2;
	cout << endl;
	 displayAsequenceOfNumber(number1, number2);
	  //Q6
	int date, month;

	cout << " Enter the daye and month with space :";
	cin >> date >> month;

	string season = printsTheSeasonForThatMonthAndDay(date, month);

	cout << " Season is : " << season;
}
//Q1
int someFunction(bool flag) {

	if (flag) {
		return 1;
	}
	else {
		return 0;
	}
}
//definition
//Q2
void calculateThesumAndarageve()
{
	int number;
	int sum = 0;
	int count = 0;
	int average;

	cout << " Enter the numbers ";

	do {
		cin >> number;
		if (number != -999) {
			sum = sum + number;
			count = count + 1;
		}

	} while (number != -999);
	cout << " Total sum is :" << sum << endl;
	average = sum / count;
	cout << " Aveage is " << average << endl;

}
//Q3
string checkVowelORConsonant(char letter) {


	if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {

		return " vowel ";
	}
	else {
		return  "consonant";
	}
}
//Q4
void countTheVowelsAndLetters() {
	char letter;
	int totalLetters = 0;
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;


	cout << " Enter the letters : ";

	do {
		letter = getchar();

		if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {
			totalLetters = totalLetters + 1;
		}


		if (letter == 'a') {
			countA = countA + 1;
		}
		else if (letter == 'e') {
			countE = countE + 1;
		}
		else if (letter == 'i') {
			countI = countI + 1;
		}
		else if (letter == 'o') {
			countO = countO + 1;
		}
		else if (letter == 'u') {
			countU = countU + 1;
		}
	} while (letter != '\n');

	int remainingLetters = totalLetters - countA - countE - countI - countO - countU;

	cout << " Number of A's : " << countA << endl;
	cout << " Number of E's : " << countE << endl;
	cout << " Number of I's : " << countI << endl;
	cout << " Number of O's : " << countO << endl;
	cout << " Number of U's : " << countU << endl;
	cout << " Remaining letters are :" << remainingLetters << endl;

}
//Q5
void  displayAsequenceOfNumber(int Number1, int Number2) {

	if (Number1 == 0) {
		return;
	}
	cout << Number2;
	displayAsequenceOfNumber(Number1 - 1, Number2);

}
//Q6
string printsTheSeasonForThatMonthAndDay(int day, int month) {
	string season;


	switch (month) {
	case 1: {
		season = " winter ";
		break;
	}
	case 2: {
		if (day <= 15) {
			season = " winter";
		}
		else {
			season = "spring";
		}
		break;
	}
	case 3: {
		season = "spring";
		break;
	}

	case 4: {
		season = "spring";
		break;
	}
	case 5: {
		if (day <= 15) {
			season = "spring";
		}
		else {
			season = "summer";
		}
		break;
	}
	case 6: {

		season = "summer";
		break;
	}
	case 7: {
		season = "summer";
		break;
	}case 8: {
		if (day <= 15) {
			season = "summer";
		}
		else {
			season = "autumn";
		}
		break;
	}
	case 9: {
		season = "autumn";
		break;
	}
	case 10: {
		season = "autumn";
		break;
	}
	case 11: {
		if (day <= 15) {
			season = "autumn";
		}
		else {
			season = "winter";
		}
		break;
	}
	case 12: {
		season = "winter";
		break;
	}
	}
	return season;
}

