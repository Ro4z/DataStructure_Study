#include "Sequence.h"

int Sequence::size()
{
	return capacity;
}

bool Sequence::empty()
{
	return (capacity == 0 ? true : false );
}

void Sequence::insertFront(int n)
{
	Node* newNode = new Node(n);

	if (capacity == 0) {
		head = newNode;
		tail = newNode;
	}
	else {
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
	capacity++;
}

void Sequence::insertBack(int n)
{
	Node* newNode = new Node(n);
	if (capacity == 0) {
		head = newNode;
		tail = newNode;
	}
	else {
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}
	capacity++;
}

void Sequence::insert(Node* ptr, int n)
{
	Node* newNode = new Node(n);
	if (ptr == head) {
		insertFront(n);
	}
	else if (ptr == tail) {
		insertBack(n);
	}
	else {
		Node* temp = ptr->next;
		ptr->next = newNode;
		newNode->prev = ptr;
		newNode->next = temp;
		temp->prev = newNode;
	}
	capacity++;
}

int Sequence::eraseFront()
{
	if (head == NULL) return -1;
	Node* temp = head;
	int ret = temp->data;
	
	head = head->next;
	head->prev = NULL;
	capacity--;
	delete temp;
	return ret;
}

int Sequence::eraseBack()
{
	if (tail == NULL) return -1;
	Node* temp = tail;
	int ret = temp->data;

	tail = tail->prev;
	tail->next = NULL;
	capacity--;
	delete temp;
	return ret;
}

int Sequence::atIndex(int i)
{
	if (head == NULL) return -1;
	Node* cursor = head;
	while (i--) {
		cursor = cursor->next;
	}

	return cursor->data;
}

int Sequence::indexOf(Node* ptr)
{
	if (head == NULL) return -1;
	Node* cursor = head;
	int idx = 0;
	while (true) {
		if (ptr == cursor) break;
		cursor = cursor->next;
		idx++;
	}

	return idx;
}

void Sequence::showSeq()
{
	if (head == NULL) return;
	Node* cursor = head;

	while (true) {
		std::cout << cursor->data << " ";
		if (cursor == tail) break;
		cursor = cursor->next;
	}
	std::cout << std::endl;
}

Node* Sequence::getTail()
{
	return tail;
}
