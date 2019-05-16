// Q.3.d.LogicalOperators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	int leftOperand, rightOperand;
	string operatr;

	cout << " Enter the left operand value 0 or 1 : ";
	cin >> leftOperand;

	cout << " Enter the right operand value 0 or 1 : ";
	cin >> rightOperand;

	cout << " Enter the operatr value :";
	cin >> operatr;

	if (operatr == "AND") {

		if (leftOperand == 0 && rightOperand == 0) {

			cout << " false ";
		}
		else if (leftOperand == 0 && rightOperand == 1) {

			cout << "false";
		}
		else if (leftOperand == 1 && rightOperand == 0) {

			cout << "false";
		}
		else if (leftOperand == 1 && rightOperand == 1) {

			cout << "true";
		}

	}
	if (operatr == "OR") {

		if (leftOperand == 0 && rightOperand == 0) {

			cout << " false ";
		}
		else if (leftOperand == 0 && rightOperand == 1) {

			cout << "true";
		}
		else if (leftOperand == 1 && rightOperand == 0) {

			cout << "true";
		}
		else if (leftOperand == 1 && rightOperand == 1) {

			cout << "true";
		}

	}

	cout << endl;
	return 0;
}
