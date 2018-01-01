#pragma once


#include"node.h"
#include"queue.h"
using namespace std;
struct stack {
	node * head;
	node * trail;
};

//functions

void initStack(stack & s);
void printStack(stack & s);
int pop(stack & s);
void push(stack & s, int key);


