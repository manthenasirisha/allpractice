#include "pch.h"
#include "queueHeader.h"
#include <iostream>
#include "string"
using namespace std;

// A linked list (LL) node to store a queue entry 
struct QNode {
	int key;
	QNode *next;
};

struct QNode *front;
struct QNode *rear;
//--------------------------------------------------------
// Function name:enQueue
// input parameters
//   @parm1:k
//--------------------------------------------------------
void enQueue(int k) {

	QNode *temp = new QNode;
	temp->key = k;

	if (rear == NULL) {
		front = temp;
		rear = temp;
		return;
	}

	rear->next = temp;
	rear = temp;
}
//--------------------------------------------------------
// Function name:deQueue
// input parameters
// Output paramenters
//   @parm1:key 
// Funtion return:key
//--------------------------------------------------------
int deQueue() {

	if (front == NULL) {
		cout << "No elements in the queue";
		return -1;
	}

	// Store previous front and 
	// move front one node ahead 
	QNode *temp = front;
	front = front->next;

	// If front becomes NULL, then 
	// change rear also as NULL 
	if (front == NULL) {
		rear = NULL;
	}

	int key = temp->key;

	free(temp);

	return key;
}
