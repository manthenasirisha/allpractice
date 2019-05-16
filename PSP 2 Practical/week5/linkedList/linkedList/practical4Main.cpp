// linkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "linkedListHeader.h"
#include "stackHeader.h"
#include "queueHeader.h"
using namespace std;

int main() {

	// linked list

	appendNode(1);
	appendNode(2);
	appendNode(3);
	appendNode(4);

	findNode(4);
	findNode(5);

	printAllNodes();

	deleteAllNodes();

	printAllNodes();
	cout << "-----------------------" << endl;

	appendNode(1);
	appendNode(2);
	appendNode(3);
	appendNode(4);
	appendNode(6);

	printAllNodes();

	cout << "-----------------------" << endl;

	insertNode(5);


	printAllNodes();
	
	cout << "-----------------------" << endl;


	updateNode(6, 7);


	printAllNodes();

	cout << "-----------------------" << endl;

	deleteNode(7);

	printAllNodes();

	// stack

	push(2);
	push(3);
	push(9);
	push(6);
	push(5);
	push(1);

	display();

	cout << endl << "peek value is: " << peek() << endl;

	pop();	

	cout << endl << "peek value is: " << peek() << endl;


	// queue
	enQueue(1);
	enQueue(2);
	enQueue(3);
	enQueue(4);
	enQueue(5);
	enQueue(6);
	enQueue(7);

	cout << endl << "dequeue value is: " << deQueue() << endl;
	cout << endl << "dequeue value is: " << deQueue() << endl;
	cout << endl << "dequeue value is: " << deQueue() << endl;
	cout << endl << "dequeue value is: " << deQueue() << endl;
	cout << endl << "dequeue value is: " << deQueue() << endl;
	cout << endl << "dequeue value is: " << deQueue() << endl;
	cout << endl << "dequeue value is: " << deQueue() << endl;

}

