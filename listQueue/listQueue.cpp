#include "listQueue.h"

void listQueue::enqueue(int n)
{
	Node* newNode = new Node(n);
	if (size == 0) {
		front = newNode;
		rear = newNode;
		this->size++;
	}
	else {
		rear->next = newNode;
		rear = newNode;
		this->size++;
	}
}

void listQueue::dequeue()
{
	if (size == 0) {
		std::cout << "Queue is empty!!";
	}
	else {
		Node* temp = front;
		front = front->next;
		delete temp;
		this->size--;
	}
}

bool listQueue::empty()
{
	return (this->size == 0);
}

int listQueue::getSize()
{
	return size;
}

int listQueue::getFront()
{
	return front->data;
}

void listQueue::showQueue()
{
	Node* cursor = front;
	while (true) {
		std::cout << cursor->data << " ";
		if (cursor == rear) break;
		cursor = cursor->next;
	}
	std::cout << std::endl;
}
