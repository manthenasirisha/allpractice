// exerciseThree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "exerciseThreeHeader.h"
using namespace std;





int main()
{
	//part1
	//cout << "1 belongs to A:" <<  belong( 1, 'A') << endl;

	//cout << "10 belongs to A:" << belong(10, 'A') << endl;

	//part2
	//int subset1[3] = { 1, 2, 3 };
	//cout << "subset1 is a subset of A:" << subSet(subset1, sizeof(subset1)/sizeof(subset1[0]), 'A') << endl;

	//int subset2[3] = { 1, 2, 7 };
	//cout << "subset2 is a subset of A:" << subSet(subset2, sizeof(subset1) / sizeof(subset1[0]), 'B') << endl;

	//part3
	//int *unionSet = unionOfSets();

	//for (int i = 0; i < 12; i++) {
		//cout << *(unionSet + i) << endl;
	//}

	//part4
	//int *intesectionSet = intersection();

	//for (int i = 0; i < 6; i++) {
		//cout << *(intesectionSet + i) << endl;
	//}
	//part5
	int *relativeCompt = relativeComplement('A');

	for (int i = 0; i < 3; i++) {
		cout << *(relativeCompt + i) << endl;
	}

	cout << "-------------------------------" << endl;

	int *relativeComptB = relativeComplement('B');

	for (int i = 0; i < 3; i++) {
		cout << *(relativeComptB + i) << endl;
	}
	cout << "---------------------------------" << endl;
	//part6
	int *diff = symmetricDifference();

	for (int i = 0; i < 6; i++) {
		cout << *(diff + i) << endl;
	}

	return 0;
}






