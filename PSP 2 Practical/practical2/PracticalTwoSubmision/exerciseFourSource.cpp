#include "pch.h"
#include <iostream>
#include "exerciseFourHeader.h"
using namespace std;

int  sparseMatrix[5][5]; // by default all the values will be 0


void insert(int value, int x, int y) {
	sparseMatrix[x][y] = value;
}

void display() {

	for (int i = 0; i < 5; i++) {
		cout << "  " << i;
	}
	cout << endl;

	for (int y = 0; y < 5; y++) {
		cout << y << "  ";
		for (int x = 0; x < 5; x++) {
			cout << sparseMatrix[x][y] << "  ";
		}

		cout << endl;

	}

}