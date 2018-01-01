#include <iostream>
#include "queue.h"
using namespace std;

//---------------------------------------------------------------------------------------------------
//                                           initQ
//---------------------------------------------------------------------------------------------------
// Given a queue, initializes it to empty
void initQ(queue & q) {
	q.head = NULL;
	q.tail = NULL;
} // initQ()

//---------------------------------------------------------------------------------------------------
//                                       printQ
//---------------------------------------------------------------------------------------------------
void printQ(queue & q) {
	cout << "" << endl;
	node *temp;
	temp = q.head;
	cout << "Queue: ";
	while (temp != NULL) {
		cout << temp->key << " ";
		temp = temp->next;
		
	}
	

	
	
} // printQ()

//---------------------------------------------------------------------------------------------------
//                                       enQ
//---------------------------------------------------------------------------------------------------
// Given a Q, pops the top, prints the item popped, and prints the stack
void enQ(queue & q, int key) {
	node* newNode = new node;
	newNode->key = key;
	newNode->next = NULL;
	if (q.head == NULL) {
		q.head = newNode;
	}
	else {
		node *temp = new node;
		temp = q.head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}

} // enQ()

//---------------------------------------------------------------------------------------------------
//                                       deQ
//---------------------------------------------------------------------------------------------------
// Given a Q, deQ's the next item and returns it. Leaves no Garbage.
int deQ(queue & q) {
	if (q.head == NULL) {
		return INT_MAX;
	}
	else {
		node *temp = new node;
		temp = q.head;
		q.head = temp->next;
		return temp->key;
		delete q.head;
	}
	
} // deQ()
