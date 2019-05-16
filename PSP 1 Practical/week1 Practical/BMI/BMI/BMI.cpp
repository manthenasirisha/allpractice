
/*
 ALGORITHM to check if a person is under weight, normal, over weight or obese based on BMI calculation

 1) Read the weight of a person in to a variable weightinkg;
 2) Read the height of a person in to a variable heightofperson;
 3) calculate bmi using the formula:
	  bmi = weightinkg / (heightofperson * heightofperson);
 4) resolve the person's weight attribute based on person's bmi;
	 if bmi <= 20 then the person is under weight;
	 else if bmi > 20 && bmi <= 30 then the person is normal weight;
	 else if bmi > 30 && bmi <= 40 then the person is over weight;
	 else if bmi > 40 then person is obese;
*/


#include "pch.h"
#include <string>
#include <iostream>
using namespace std;
int main()

{
	float bmi;
	float weightinkg;
	float heightofperson;

	cout << "What is your weight:";
	cin >> weightinkg;

	cout << "what is your height:";
	cin >> heightofperson;

	bmi = weightinkg / (heightofperson * heightofperson);

	cout << "bmi is:";
	cout << bmi;

	cout << endl;

	if (bmi <= 20) {
		cout << "Your weight is Underweight";
	}
	else if (bmi > 20 && bmi <= 30) {
		cout << "Your weight is Normal";
	}
	else  if (bmi > 30 && bmi <= 40) {
		cout << " your weight is overweight";
	}
	else if (bmi > 40) {
		cout << "your weight os obese ";
	}

	cout << endl;

	return 0;

}
