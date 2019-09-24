#pragma once
#ifndef QUEUE_H
#include<iostream>

class arrayQueue {
public:
	int* arr;
	int front, rear;
	int n; //size of queue;
	int N; //size of array;
	arrayQueue(int _size) {
		arr = new int[_size];
		N = _size;
		n = 0;
		front = 0;
		rear = 0;
	}

	void enqueue(int);
	void dequeue();
	int getFront();
	bool empty();
	int getSize();
	void showQueue();
};
#endif // !QUEUE_H

