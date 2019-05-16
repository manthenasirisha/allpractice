// Q.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void SwapValues(int &value1, int &value2);
void SwapValuesWithOutTemp(int &value1, int &value2);
void Displaystar(int);
float calculateTheN(int);
int sumOfDigits(int);
int fibonacciRecusion(int n);
int xPowerN(int, int);
int main()
{
	//Q.2a
	//---------------------------------------------
	//int number1, number2;

	//cout << "Enter the 2 values with space : ";
	//cin >> number1 >> number2;

//	SwapValues(number1, number2);
	
 //Q.2b 
 //SwapValuesWithOutTemp(number1, number2);

	//cout << " number1 :" << number1;
	//cout << " number2 :" << number2;
	//---------------------------------------------

	//part2.Q.1

	//int number;

	/*cout << " Enter the number : ";
	cin >> number;

	Displaystar(number);*/
	//---------------------------------------------

	//part2.Q.2
	/*int number;

	cout << "Enter the numer";
	cin >> number;

	cout << calculateTheN(number);*/
	//---------------------------------------------

	//part3.Q.3

	/*int number;

	cout << " Enter the number : ";
	cin >> number;

	cout << " sum of digits is :" << sumOfDigits(number);*/
	//---------------------------------------------
	//extra Q.4
	/*int n;
	cout << "Enter nth fibonacci number you want";
	cin >> n;

	cout << n << "th fibonaci number is " << fibonacciRecusion(n);*/
//....................................................................
	// Q.5

/*	int n, x;

	cout << "Enter the n :";
	cin >> n;

	cout << "Ente the x :";
	cin >> x;

	cout << "x power n is :" << xPowerN(x, n);*/


}

//Q.2.a
void SwapValues(int &value1, int &value2) {
	int temp;

	temp = value1;
	value1 = value2;
	value2 = temp;
}
//Q.2.b

void SwapValuesWithOutTemp(int &value1, int &value2) {
	value1 = value1 + value2;
	value2 = value1 - value2;
	value1 = value1 - value2;
}
//part2.Q.1
void Displaystar(int number) {

	if (number == 0) {
		return;
	}
	else {
		cout << "*";
		Displaystar(number - 1);
	}
}
//part2.Q.2
float calculateTheN(int number) {
	if (number == 0) {
		return 0;
	}
	else {
		return calculateTheN(number - 1) +  (1.0/number);
	}
}
//part2.Q.3
int sumOfDigits(int number) {
	if (number == 0) {
		return 0;
	}
	else {
		return number % 10 + sumOfDigits(number / 10);
	}
}

//extra Q.4
int fibonacciRecusion(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return fibonacciRecusion(n - 1) + fibonacciRecusion(n - 2);
	}

}
//Q.5

int xPowerN(int x, int n) {
	if (n == 1) {
		return x;
	}
	else {
		return x * xPowerN(x, n - 1);
	}

}
