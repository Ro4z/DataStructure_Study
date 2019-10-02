#pragma once
#ifndef LISTQUEUE_H
#include<iostream>

class Node {
public:
	int data;
	Node* next;
	Node(int _data) {
		data = _data;
		next = nullptr;
	}
};
class listQueue {
public:
	Node* front;
	Node* rear;
	int size;
	listQueue() {
		front = nullptr;
		rear = nullptr;
		size = 0;
	}

	void enqueue(int);
	void dequeue();
	
	bool empty();

	int getSize();
	int getFront();

	void showQueue();
};

#endif // !LISTQUEUE_H
