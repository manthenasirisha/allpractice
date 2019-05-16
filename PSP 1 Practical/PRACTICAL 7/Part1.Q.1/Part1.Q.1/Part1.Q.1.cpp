// Part1.Q.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

float calculateTheAbsoluteValue(float);
char calculateTheUnderGraduateGrade(float);
int calculateTheMaximum(int,int);
int calculateTheDateMonthYear(int,int,int);
int calculateTheMinOrMax(int, int,int,int);
int calculateTheAddition(int, int); 
int calculateTheSubtraction(int,int);
int calculateTheMultiplication(int,int);
float calculateTheDivision(int,int);
float convertFahrenheitToCelsius(float);
float convertCelsiusToFahrenheit(float);
int calculateTheNfactoria(int);
string pluralize(string,string);
int calculateTheNthFibbonacciNumber(int);
bool isNumberAnArmstrongNumber(int);
int powerOfNumber(int n, int p);



int main()
{
	//Q.1
	
	float realNumber;

	cout << "Enter the real number :";
	cin >> realNumber;

	int absolutenumber = calculateTheAbsoluteValue(realNumber);

	cout << " Absolute Number is : " << absolutenumber;

	//Q.2

	float marks;

	cout << "Enter the marks :";
	cin >> marks;

	char underGraduate = calculateTheUnderGraduateGrade(marks);

	cout << " Undergraduate grade is " << underGraduate;

	//Q.3

	int number1, number2;

	cout << "Enter the two integers with space :";
	cin >> number1 >> number2;

	int maximum = calculateTheMaximum(number1, number2);

	cout << "Maximum number is :" << maximum;

	//Part2.Q.1
	
	int date, month, year;

	cout << " Enter the date month and year with space ";
	cin >> date >> month >> year;

	int datemonthyear = calculateTheDateMonthYear(date, month, year);

	cout << "Date month and year is :" << datemonthyear;
	

	//Part2.Q.2

	int number1, number2, number3, minmax;

	cout << "Enter the number 1 and number 2 and number 3 with space : ";
	cin >> number1 >> number2 >> number3;
	cout << " Enter 1 for minimum, 2 for maximum : ";
	cin >> minmax;

	int result = calculateTheMinOrMax(number1, number2, number3,minmax);

	if (minmax == 1){
		cout << " Minimum number is " << result;
	}
	else if (minmax == 2) {
		cout << "Maximum number is " << result;
	}
	//Part2.Q.3
	int number1, number2, result;
	float divisionResult;
	char calculation;

	cout << " Enter the number 1 and number 2 with space :";
	cin >> number1 >> number2;

	cout << "Do you want addition or subtraction or multiplication or division :";
	cin >> calculation;

	if (calculation == 'A') {
		result = calculateTheAddition (number1,number2);

		cout << " sum of numbers is " << result;
	}
	else if (calculation == 'S') {
		result = calculateTheSubtraction(number1, number2);

		cout << " sum of number is " << result;
	}
	else if (calculation == 'M') {
		result = calculateTheMultiplication(number1,number2);

		cout << " sum of number is " << result;
	}
	else if (calculation == 'D') {
		divisionResult = calculateTheDivision(number1, number2);

		cout << " sum of number is " << divisionResult;
	}

   //part.2.Q.4
	float temperature,result;
	int convertTo;

	cout << "Enter the tempure :";
	cin >> temperature;

	cout << " Do you want fahrenheit to celsius or celsius to fahrenheit :";
	cin >> convertTo;

	if (convertTo == 1) {

		result = convertFahrenheitToCelsius(temperature);

		cout << " tempareture in celsius is :" << result;
	}
	else if (convertTo == 2) {
	
		result = convertCelsiusToFahrenheit(temperature);

		cout << " tempureture in fahrenheit is " << result;
	}
	//part.2Q.5
	int n, result;

	cout << "Enter the N number :";
	cin >> n;

	 result = calculateTheNfactoria(n);

	cout << " N factoria is :" << result;

	//part.2.Q.6

string noun;
string number;

cout << "enter noun: ";
cin >> noun;

cout << "Enter number: ";
cin >> number;

cout << pluralize(noun, number);



	//part.2Q.7
	 int k , result;

	cout << "which fibonacci number do you want:";
	cin >> k;

	result = calculateTheNthFibbonacciNumber(k);

	cout << k <<  "th fibbonacci number is : " << result;
// part.2Q8

int number;

cout << "enter a number";
cin >> number;

bool result = isNumberAnArmstrongNumber(number);

if (result) {
	cout << "given number: " << number << " is armstrong number";
}
else {
	cout << "given number: " << number << " is NOT armstrong number";
}


}
//Q.1
float calculateTheAbsoluteValue(float realNum)
{
	
	int absolutenumber;

	if (realNum > 0) {
	      
		return realNum;
	}
	else {

		return  realNum * (-1);
	}
	
}
//Q.2
	char calculateTheUnderGraduateGrade(float marks)
{
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
	int calculateTheMaximum(int number1, int number2) 
	{
		int maximum;

		if (number1 > number2) {
			maximum = number1;
		}
		else {
			maximum = number2;
		}

		return maximum;
	}
	//part2.Q.1
	int calculateTheDateMonthYear(int date, int month, int year)
	{
		int datemonthyear, datemonth;

		datemonth = date * 100 + month;

		datemonthyear = datemonth * 100 + year;

		return datemonthyear;
	
	}
	//part.2.Q2
	int calculateTheMinOrMax(int number1, int number2, int number3, int minmax)
	{
		int result = 0;
		if (minmax == 1) {

			if (number1 < number2 && number1 < number3) {
                  result = number1;
			}
			else if(number2 < number3){
				result = number2;
			}
			else {
				result = number3;
			}
	    }
		if (minmax == 2) {

			if (number1 > number2 && number1 > number3) {
				result = number1;
			}
			else if (number2 > number3) {
				result = number2;
			}
			else {
				result = number3;
			}
		}		
		return result;
	}
	//part.2Q.3
	int calculateTheAddition(int leftoperand, int rightoperand){

		return leftoperand + rightoperand;
	}
	int calculateTheSubtraction(int leftoperand, int rightoperand) {
	
		return leftoperand - rightoperand;
	}
	int calculateTheMultiplication(int leftoperand, int rightoperand) {
	
		return leftoperand * rightoperand;
	}
	float calculateTheDivision(int leftoperand, int rightoperand) {
	
		return (leftoperand * 1.0) / rightoperand;
	}
	//part.2Q.4
	float convertFahrenheitToCelsius(float temperature) {
		float celsius;

		celsius = temperature -(32 * 5 * 1.0) / 9;
		return celsius;
	}
	float convertCelsiusToFahrenheit(float temperature) {
		float fahrenheit;

		fahrenheit = ((1.0 * temperature * 9) / 5) + 32;
		return fahrenheit;
	}
	//part.2Q.5
	int calculateTheNfactoria(int n) {

		int result = 1;

		for (int i = 1; i <= n; i++) {
		
			result = result * i;
		}
		return result;

	}
	//part.2Q.6
	string pluralize(string noun, string number) {
	
		string result;

		if (number == "1") {
			result = "1 " + noun;
		}
		else {
			result = number + " " + noun + "s";
		}

		return result;
	}
	//part.2Q.7
	int calculateTheNthFibbonacciNumber(int n)
	{
		int fibbonaccinumber, previousFibbonaccinumber ;
		int temp;

		for (int i = 1; i <= n; i++) {
			if (i == 1 || i == 2) {
				fibbonaccinumber = 1;
				previousFibbonaccinumber = 1;
			}
			else {
				temp = fibbonaccinumber;
				fibbonaccinumber = fibbonaccinumber + previousFibbonaccinumber;
				previousFibbonaccinumber = temp;
			}
		}

		return fibbonaccinumber;
	}
	//part.2.Q.8
	bool isNumberAnArmstrongNumber(int number){
		int temp = number, temp2 = number, sum = 0 ;
		int count = 0;
		bool result;
		
		while (temp != 0) {
			temp = temp / 10;
			count = count + 1;
		}

		
		int digit;
		while (temp2 != 0)  {
			digit = temp2 % 10;
			sum = sum + powerOfNumber(digit, count);
			temp2 = temp2 / 10;
		}

		
		if (sum == number) {
			result = true;
		}
		else {
			result = false;
		}

		return result;
	} 
	int powerOfNumber(int n, int p) {
		int result =1;

		for (int i = 1; i <= p; i++) {
			result = result * n;
		}

		return result;

	}



	



