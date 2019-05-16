#include "pch.h"
#include <iostream>
#include "linkedListHeader.h"
using namespace std;

struct ListNode {
	float value;
	struct ListNode *next;
};

ListNode *head;
//--------------------------------------------------------
// Function name:appendNode
// input parameters
//   @parm1:num
//--------------------------------------------------------
void appendNode(float num) {
	
	ListNode *newNode, *temp;

	newNode = new ListNode;
	newNode->value = num;
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
	} else {
		temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
//--------------------------------------------------------
// Function name:insertNode
// input parameters
//   @parm1:num
//--------------------------------------------------------
void insertNode(float num) {
	ListNode *newNode, *current;

	newNode = new ListNode;
	newNode->value = num;
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
	}
	else {
		current = head;

		while (current->next != NULL && current->next->value < num) {
			current = current->next;
		}

		if (current->next != NULL) {
			newNode->next = current->next;
		}
		current->next = newNode;
	}

}
//--------------------------------------------------------
// Function name:updateNode
// input parameters
//   @parm1:oldValue
//   @parm2:newValue
//--------------------------------------------------------
void updateNode(float oldValue , float newValue) {
	ListNode *current = head;
	if (head == NULL) {
		cout << "Linked List not initialized";
		return;
	}

	do {
		if (current->value == oldValue) {
			current->value = newValue;
			return;
		}
		
		current = current->next;
	
	} while ((current != NULL));
}
//--------------------------------------------------------
// Function name:deleteNode
// input parameters
//   @parm1:num
//--------------------------------------------------------
void deleteNode(float num) {
	ListNode *current = head;

	if (head == NULL) {
		cout << "No nodes to delete";
		return;
	} else {
		
		while (current->next != NULL && current->next->value != num) {
			current = current->next;
		}

		if (current->next->value == num) {
			ListNode *nodeToBeDeleted = current->next;
			current->next = current->next->next;
			free(nodeToBeDeleted);
		}
	}
	
}
//--------------------------------------------------------
// Function name:deleteAllNodes
//--------------------------------------------------------
void deleteAllNodes() {
	ListNode *currentNode = head;
	ListNode *previousNode;
	while (currentNode != NULL) {
		previousNode = currentNode;
		currentNode = currentNode->next;
		free(previousNode);
	}
	head = NULL;
}
//--------------------------------------------------------
// Function name:findNode
// input parameters
//   @parm1:valueTofind
//--------------------------------------------------------
void findNode(float valueToFind) {
	ListNode *currentNode = head;

	while (currentNode != NULL) {
		
		if (currentNode->value == valueToFind) {
			cout << "found the value: " << valueToFind<<endl;
			return;
		}
		currentNode = currentNode->next;
	}

	cout << "could not find the value: " << valueToFind << endl;
}
//--------------------------------------------------------
//Function name : printAllNodes
//--------------------------------------------------------
void printAllNodes() {
	ListNode *currentNode = head;
	int i = 0;
	while (currentNode != NULL) {
		cout << "Node-" <<  i << "value is: " << currentNode->value << endl;
		currentNode = currentNode->next;
		i++;
	}
}