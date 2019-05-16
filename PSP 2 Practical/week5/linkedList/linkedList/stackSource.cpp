#include "pch.h"
#include <iostream>
#include "stackHeader.h"
using namespace std;

struct Node {
	int data;
	struct Node* link;
};

struct Node *top;
//--------------------------------------------------------
// Function name:push
// input parameters
//   @parm1:data
//--------------------------------------------------------
void push(int data) {

	struct Node* temp;
	temp = new Node;

	if (!temp) {
		cout << "Heap Overflow" << endl;
		exit(1);
	}

	temp->data = data;

	temp->link = top;

	top = temp;
}
//--------------------------------------------------------
// Function name:isEmpty
// input parameter
//--------------------------------------------------------
int isEmpty() {
	return top == NULL;
}
//--------------------------------------------------------
// Function name:peek
//--------------------------------------------------------
int peek() {
	if (!isEmpty())
		return top->data;
	else
		exit(EXIT_FAILURE);
}
//--------------------------------------------------------
// Function name:pop
// input parameters
// Output paramenters
//   @parm1: popNodeValue
// Funtion return :popNodeValue
//--------------------------------------------------------
int pop() {
	struct Node* temp;
	int popNodeValue;

	// check for stack underflow 
	if (top == NULL) {
		cout << "Stack Underflow";
		exit(1);
	} else {
		// top assign into temp 
		temp = top;

		// assign second node to top 
		top = top->link;

		// destroy connection between first and second 
		temp->link = NULL;
		popNodeValue =  temp->data;

		// release memory of top node 
		free(temp);
	}

	return popNodeValue;
}
//--------------------------------------------------------
// Function name:display
//--------------------------------------------------------
// remove at the beginning 
void display() {
	struct Node* temp;

	// check for stack underflow 
	if (top == NULL) {
		cout << "Stack Underflow";
		exit(1);
	}
	else {
		temp = top;
		while (temp != NULL) {

			// print node data 
			cout << temp->data << endl;

			// assign temp link to temp 
			temp = temp->link;
		}
	}
}
