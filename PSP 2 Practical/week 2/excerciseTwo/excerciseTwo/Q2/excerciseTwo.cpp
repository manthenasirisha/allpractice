#include "pch.h"
#include <iostream>
#include <string>
#include "excerciseTwo.h"
using namespace std;


int length = 0;

//part1
struct Student students[10];


//part2
struct Student readStudentInformation() {

	struct Student student;

	cout << "Enter name : ";
	cin >> student.name;
	cout << endl;

	cout << "Enter Dep : ";
	cin >> student.department;
	cout << endl;

	cout << "Enter Program : ";
	cin >> student.programme;
	cout << endl;

	cout << "Enter 6 Marks : ";
	for (int i = 0; i < 6; i++) {
		cin >> student.examMarks[i];
		cout << endl;
	}

	return student;
}
//part5
void printStudentInformation() {
	for (int i = 0; i < 3; i++) {
		cout << "--------------------------------------------------" << endl;
		cout << "student " << i + 1 << " information is" << endl;

		cout << "Student name is :";
		cout << students[i].name << endl;


		cout << "Department is :";
		cout << students[i].department << endl;

		cout << "Student Program is :";
		cout << students[i].programme << endl;

		cout << "Students Marks are :";
		for (int j = 0; j < 6; j++) {
			cout << students[i].examMarks[j] << endl;
		}
	}
 }

//part3
void insertStudentInformation(struct Student student) {
	students[length] = student;
	length++;
}
//part4
void updateStudentInformation() {
	int index;

	cout << "Enter the index of the student information you want to update :";
	cin >> index;


	char choice;
	cout << "Do you want to update name? (Y/N)";
	cin >> choice;
	if (choice == 'Y') {
		cout << "Enter the updated name: ";
		cin >> students[index].name;
	}
	cout << endl;

	cout << "Do you want to update department? (Y/N)";
	cin >> choice;
	if (choice == 'Y') {
		cout << "Enter the updated depatment name: ";
		cin >> students[index].department;
	}
	cout << endl;

	cout << "Do you want to update programme? (Y/N)";
	cin >> choice;
	if (choice == 'Y') {
		cout << "Enter the updated program name: ";
		cin >> students[index].programme;
	}
	cout << endl;

	cout << "Do you want to update marks? (Y/N)";
	cin >> choice;
	if (choice == 'Y') {
		cout << "Enter the updated updated marks: ";
		for (int i = 0; i < 6; i++) {
			cin >> students[index].examMarks[i];
			cout << endl;
		}
	}

	cout << endl;
}