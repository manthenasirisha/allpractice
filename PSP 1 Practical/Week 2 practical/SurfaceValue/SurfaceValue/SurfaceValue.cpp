// SurfaceValue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()

{
float surfaceArea; // out put
float length;     // input
float diameter;  // input

cout << "Enter the length:";
cin >> length;
cout << "Enter the diameter:";
cin >> diameter;

surfaceArea = length * diameter * 22.0 / 7;

cout << "surfacearea is:";
cout << surfaceArea;
cout << endl;
return 0;
}