#include<iostream>
#include "listQueue.h"

int main() {
	listQueue q;
	if (q.empty() == true) {
		std::cout << "Queue is empty!\n";
	}
	for (int i = 0; i < 10; i++) {
		q.enqueue(i);
	}

	q.showQueue();
	q.dequeue();
	q.showQueue();
	std::cout << q.getSize() << std::endl; // ÀßÇØ½áÀ¶~~!!!!!
	q.enqueue(11);
	std::cout << q.getFront() << std::endl;
	q.showQueue();


	return 0;
}