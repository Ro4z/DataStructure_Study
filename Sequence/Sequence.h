#pragma once
#ifndef SEQUENCE_H
#include<iostream>

class Node {
public:
	int data;
	Node* prev;
	Node* next;

	Node(int n) {
		data = n;
		prev = NULL;
		next = NULL;
	}
};

class Sequence {
public:
	Node* head;
	Node* tail;
	int capacity;
	Sequence() {
		capacity = 0;
		head = NULL;
		tail = NULL;
	}
	int size();
	bool empty();

	void insertFront(int);
	void insertBack(int);
	
	void insert(Node*, int);

	int eraseFront();
	int eraseBack();

	int atIndex(int);
	int indexOf(Node*);
	
	void showSeq();
	Node* getTail();
};

#endif // !SEQUENCE_H
