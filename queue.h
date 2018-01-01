#pragma once
#include "node.h"
struct queue {
	node *head;
	node *tail;
};

// queue library prototypes
void initQ(queue & q);
void printQ(queue & q);
void enQ(queue & q, int key);
int  deQ(queue & q);
