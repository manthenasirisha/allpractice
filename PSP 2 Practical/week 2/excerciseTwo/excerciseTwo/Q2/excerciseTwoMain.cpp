// This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "excerciseTwo.h"
using namespace std;


int main() {

	struct Student student1;
	for (int i = 1; i <= 3; i++) {
		student1 = readStudentInformation();
		insertStudentInformation(student1);
		cout << endl;
	}

	printStudentInformation();

	updateStudentInformation();

	printStudentInformation();

	return 0;
}
	





