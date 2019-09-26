#include "nodeList.h"

int nodeList::getSize()
{
	return this->size;
}

bool nodeList::empty()
{
	return (this->size == 0);
}


Node* nodeList::begin()
{
	return this->head;
}

Node* nodeList::end()
{
	return this->tail->next;
}

void nodeList::insertFront(int e)
{
	Node* newNode = new Node(e);
	if (size == 0) {
		head = newNode;
	}
	else {
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
	size++;
}

void nodeList::insertBack(int e)
{
	Node* newNode = new Node(e);
	if (size == 0) {
		tail = newNode;
		head = newNode;
	}
	else {
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}
	size++;
}

int nodeList::eraseFront()
{
	if (size == 0) {
		return -1;
	}
	else {
		Node* cursor = head;
		head = head->next;
		head->prev = NULL;
		int ret = cursor->data;
		delete cursor;
		size--;	
		return ret;
	}
}

int nodeList::eraseBack()
{
	if (size == 0) {
		return -1;
	}
	else {
		Node* cursor = tail;
		int ret = cursor->data;
		tail = tail->prev;
		tail->next = NULL;
		size--;
		delete cursor;
		return ret;
	}
}

void nodeList::insert(Node* target, int e)
{
	Node* newNode = new Node(e);
	Node* temp = target->prev;
	temp->next = newNode;
	newNode->next = target;
	newNode->prev = temp;
	target->prev = newNode;
	size--;
}

void nodeList::erase(Node* target)
{
	if (target == head) {
		this->eraseFront();
		return;
	}
	else if (target == tail) {
		this->eraseBack();
		return;
	}
	target->prev->next = target->next;
	size--;
	delete target;
}
