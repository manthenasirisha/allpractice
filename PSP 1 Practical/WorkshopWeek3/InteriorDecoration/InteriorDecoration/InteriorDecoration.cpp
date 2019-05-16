// InteriorDecoration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float roomlength, roomwidth, roomheight, widthofwindow, heightofwindow, widthofdoor, heightofdoor;
	float wall1withwindow, wall2withdoor, wall3withwidth, wall4withlength;
	float costofpaint;
	float paintpersqm;
	float totalarea;
	float paintperroominlitres;
	float totalcost;

	cout << "Enter the length of room :";
	cin >> roomlength;
	cout << endl;

	cout << "Enter the width of room";
	cin >> roomwidth;
	cout << endl;

	cout << "Enter the height of room";
	cin >> roomheight;
	cout << endl;

	cout << "Enter width of window";
	cin >> widthofwindow;
	cout << endl;

	cout << "Enter the height of window";
	cin >> heightofwindow;
	cout << endl;

	cout << "Enter the width of door";
	cin >> widthofdoor;
	cout << endl;

	cout << "Enter the height of door";
	cin >> heightofdoor;
	cout << endl;


	cout << "Enter cost of paint";
	cin >> costofpaint;
	cout << endl;

	cout << "Enter paint per sq m";
	cin >> paintpersqm;
	cout << endl;

	wall1withwindow = roomwidth * roomheight - widthofwindow * heightofwindow;
	wall2withdoor = roomlength * roomheight - widthofdoor * heightofdoor;
	wall3withwidth = roomwidth * roomheight;
	wall4withlength = roomlength * roomheight;

	totalarea = wall1withwindow + wall2withdoor + wall3withwidth + wall4withlength;
	paintperroominlitres = paintpersqm * totalarea;
	totalcost = costofpaint * paintperroominlitres;

	cout << "paintperroom ";
	cout << paintperroominlitres;
	cout << endl;

	cout << "total cost";
	cout << totalcost;
	cout << endl;





	return 0;
}
