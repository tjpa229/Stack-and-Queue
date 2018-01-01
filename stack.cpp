//TO DO: include needed libraries
#include<iostream>
#include"stack.h"

using namespace std;
//---------------------------------------------------------------------------------------------------
//                                           initStack
//---------------------------------------------------------------------------------------------------
// Given a stack, initializes it to empty
void initStack(stack & s) {
	s.head = NULL;
	s.trail = NULL;
} // initStack()

//---------------------------------------------------------------------------------------------------
//                                           printStack
//---------------------------------------------------------------------------------------------------
// Given a stack: prints the keys of all nodes on the stack from top to bottom, left to right on 1 line
// Ex: STACK: 22 87 39 45     (where 22 is the top and 45 is the bottom)
void printStack(stack & s) {
	node *temp;
	temp = s.head;
	
	cout << "Stack: ";
	while (temp != NULL) {
		cout << temp->key << " ";
		temp = temp->next;

	}

} // printStack()

//---------------------------------------------------------------------------------------------------
//                                           pop
//---------------------------------------------------------------------------------------------------
// removes the top element of the stack, deallocates it, and returns its key
int pop(stack & s) {
	if (s.head == NULL) {
		return INT_MAX;
	}
	else {
		node *temp = new node;
		temp = s.head;
		s.head = temp->next;
		return temp->key;
		delete s.head;
	}
} // pop()

//---------------------------------------------------------------------------------------------------
//                                           push
//---------------------------------------------------------------------------------------------------
// Given a stack and the key of a new node; creates a new node and populates it with the given key;
// pushes the new node on the stack.
void push(stack & s, int key) {
	node* newNode = new node;
	newNode->key = key;
	newNode->next = NULL;
	if (s.head == NULL) {
		s.head = newNode;
	}
	else {
		node *temp = new node;
		temp = s.head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
} // push()
