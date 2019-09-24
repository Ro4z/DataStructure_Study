#include "Queue.h"

void arrayQueue::enqueue(int v)
{	
	if (n == N) {
		std::cout << "Queue is full!!" << std::endl;
	}
	else {
		arr[rear] = v;
		rear = (rear + 1) % N;
		n++;
	}
}

void arrayQueue::dequeue()
{
	if (n == 0) {
		std::cout << "Queue is empty!!" << std::endl;
	}
	else {
		front = (front + 1) % N;
		n--;
	}
}

int arrayQueue::getFront()
{
	return arr[front];
}

bool arrayQueue::empty()
{
	return (n == 0);
}

int arrayQueue::getSize()
{
	return n;
}

void arrayQueue::showQueue() {
	int cursor = front;
	for (int i = 0; i < n; i++) {
		std::cout << arr[cursor] << " ";
		cursor = (cursor + 1) % N;
	}
	std::cout << std::endl;
}
