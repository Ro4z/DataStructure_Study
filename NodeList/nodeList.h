#pragma once
#ifndef NODELIST_H
#include<iostream>

class Node {
public:
	int data;
	Node* prev;
	Node* next;
	Node(int n) {
		this->data = n;
		prev = NULL;
		next = NULL;
	}
};

class nodeList {
public:
	Node* head;
	Node* tail;
	int size;
	nodeList() {
		head = NULL;
		tail = NULL;
		this->size = 0;
	}
	int getSize();
	bool empty();
	Node* begin(); // return address of head
	Node* end(); // return address next of tail

	void insertFront(int);
	void insertBack(int);

	int eraseFront();
	int eraseBack();

	void insert(Node*, int);
	void erase(Node*);
	void showList() {
		if (size == 0) return;
		Node* cursor = head;
		while (true) {

			std::cout << cursor->data << " ";
			if (cursor == tail) break;
			cursor = cursor->next;
		}
	}
};
#endif // !NODELIST_H
