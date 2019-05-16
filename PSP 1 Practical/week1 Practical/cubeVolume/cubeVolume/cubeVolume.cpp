// cubeVolume.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>
#include <iostream>
using namespace std;
int main()
{	float volume;	float sideofcube;	cout << "enter the side of cube:";	cin >> sideofcube;	volume = sideofcube * sideofcube  * sideofcube;	cout << "Volume of the cube is:";	cout << volume;	cout << endl;	return 0;
}
