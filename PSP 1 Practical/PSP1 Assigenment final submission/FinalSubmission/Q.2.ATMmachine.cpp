// Author : Sirisha penmetsa
// Date : 21/03/2019

// Q.2.ATMmachine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
2.
Write a program to mimic the ATM machine.First, the program asks users to enter the PIN number which is stored in the program.
If the PIN is not correct, the program allows the user to retry 3 times.After 3 tries not successful, the program will stop.
If the PIN correct, the program allows users to do following transactions.In the following, the bold type represents questions
the program types to the user.Each response to the transaction type question is a single character.Any attempted illegal transaction causes an error message.
The program runs continuously until the user selects Exit option

Analysis :

1)	The program takes PIN as the input from the user which is checked against a predefined PIN taken in the program
2)	If pin is invalid then ask the user to enter the pin again, to max of 3 times.
3)	The program then
a)	Either takes Transaction Type as  O and Initial deposit of some amount.
b)	Or takes Transaction Type as B and prints the balance .
c)	Or takes Transaction Type as D and Deposit of some amount; and prints the old and new balance.
d)	Or takes Transaction Type as W and  Withdrawal of some amount; and only prints new balance.
The transaction type is allowed only if sufficient funds are available.
e)	Or takes Transaction Type and I and Computes interest at given % rate for given years and outputs  the new balance.
f)	Or takes Transaction Type, E and Exit program.
4)	The above step is done continuously until the user selects the E for Exiting the program

Example 1 : Assume the valid pin is 1234

Enter the pin : 1235
Enter the pin : 1234

Transaction Type ? : O
Initial deposit ? : 150

Transaction Type ? : B
Balance : 150

	Transaction Type ? : E
	Exit.


	Example 2 : Assume the valid pin is 1234

	Enter the pin : 1234

	Transaction Type ? : O
	Initial deposit ? : 150

	Transaction Type ? : W
	Withdrawal amount : 50
	New Balance : 100

	Transaction Type ? : E
	Exit.

	________________________________________

	PseudoCode :
START

1) Let the pin be defined as PREDEFINED_PIN = 1234
2) check the user entered pin

let numberOfRetries = 0
let userEnteredPin = 5678
while  userEnteredPin is NOT valid and numberOfRetries <= 3 {
	ask user to enter the pin
		if userEnteredPin is equal to PREDEFINED_PIN
			then userEnteredPin is valid
			increment numberOfRetries
}
3)  Do transactions
if (userEnteredPin is valid) {

	do {
		Read the transactionType from the user

			if transactionType == 'O' {
				read the initial amount
			}
			else if  transactionType == 'B' {
				print balance
			}
			else if transactionType == 'D' {
				read the deposit
					print old - balance which is in balance
					balance = balance + deposit
					print new balance which is in balance

			}
			else if transactionType == 'W' {
				read the withdrawal amount
					if balance >= withdrawal amount{
						balance = balance - withdrawalAmount
					}
						print new - balance which is in balance
			}
			else if transactionType == 'I' {
				read the interest rate
					read the number of years
					balance = balance + ((interestRate * balance) / 100) numberOfYears
			}
	  } while (transactionType not equal to 'E')
}
END
*/
// Author : Sirisha penmetsa
// Date : 21/03/2019

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int pin = 1234;
	bool  valid = false;
	int numberOfRetries = 0;
	char transactionType;
	float  balance;
	int deposit, withdrawal;
	float interestRate =  10, numberOfYears;


	do {
		cout << "Enter the pin :";
		cin >> pin;
		cout << endl;

		if (pin != 1234) {
			numberOfRetries++;
		}
		else {
			valid = true;
		}

	} while (!valid && numberOfRetries <= 3);


	if (numberOfRetries > 3) {
		cout << "number of attempts exceeded ";
		return 0;
	}


	cout << " Enter O for open account " << endl;
	cout << " Enter B for balance " << endl;
	cout << " Enter D for deposit " << endl;
	cout << " Enter W for withdrawal " << endl;
	cout << " Enter I for interest calculation " << endl;
	cout << " Enter E for exit " << endl;

	do {
		cout << " Enter the Transaction Type :";
		cin >> transactionType;

		switch (transactionType) {
			case 'O': {

				cout << " Enter the intial deposit : " ;

				cin >> balance;
				
				cout << endl;
				break;
			}
			case 'B': {
				cout << " The balance is : ";
				cout << balance << endl;
				break;
			}
			case 'D': {
				cout << " Enter the Deposit :";
				cin >> deposit;

				cout << "old balace is :";
				cout << balance  << endl;

				balance = balance + deposit;

				cout << "New balace is :";
				cout << balance << endl;

				break;
			}
			case 'W': {
				cout << " Enter the  A Withdrawal Amount : ";
				cin >> withdrawal;
				cout << endl;

				if (balance > withdrawal) {
					balance = balance - withdrawal;

					cout << " New balance is : " << balance << endl;
				}
				else {
					cout << "No Sufficient balance " << endl;
				}
				break;
			}
			case 'I': {
				cout << "Enter the number of years :";
				cin >> numberOfYears;

				cout << endl;

				balance = balance + (((interestRate * balance) / 100) *  numberOfYears);

				cout << " New balance is :" << balance << endl;

				break;
			}
			case 'E': {
				cout << " Exit the program ";
				break;
			} 
			default: {
				break;
			}
		}
	} while (transactionType != 'E');
}


