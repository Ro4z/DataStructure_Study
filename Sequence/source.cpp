#include<iostream>
#include"Sequence.h"
using namespace std;

int main() {
	Sequence s;
	Node* ptr = NULL;
	for (int i = 0; i < 10; i++) {
		s.insertBack(i);
		if (i == 5) ptr = s.getTail();
	}

	std::cout << s.size() << endl;
	std::cout << s.indexOf(ptr) << endl;
	s.insert(ptr, 19);
	s.showSeq();
	std::cout << s.size();

	
}