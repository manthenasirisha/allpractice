// Part2.Q.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

float convertFahrenCen;
float evaluateExp;
viod calculateGrade;
int main()
{
	float fah;
	cout << "Enter the farhen";
	cin >> fah;

	float cen = convertFarenCen(fah);

	cout << "centigrade" << cen << endl;

	int grade;
	cout << "enter grade";
	cin >> grade;
	return 0;
}
float convertFarenCen ( float fah)
{
	float cen;

	cen = (fah - 32 )* 5.0 / 9;

	return cen;
}
//q.3
float evaluateExp(int n)
{ 
	float sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum = sum + 1.0 / i;
	}
	return 0;
}
//q.2
void calculateGrade 





