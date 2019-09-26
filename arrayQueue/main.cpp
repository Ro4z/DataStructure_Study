#include<iostream>
#include"Queue.h"

int main() {
	arrayQueue q(10);
	if (q.empty() == true) {
		std::cout << "Queue is empty" << std::endl;
	}
	for (int i = 0; i < 11; i++) {
		q.enqueue(i);
	}

	std::cout << q.getSize() << std::endl;
	q.dequeue();
	std::cout << q.getSize() << std::endl;
	q.enqueue(50);
	q.enqueue(100);
	std::cout << q.getFront() << std::endl;
	
	return 0;
}