#include<iostream>
#include"nodeList.h"
using namespace std;

#define FOR(i,n)for(int i=0;i<n;i++)
int main() {
	nodeList list;
	Node* iter = NULL;
	FOR(i, 10) {
		
		if (i < 5) {
			list.insertBack(i);
		}
		else {
			list.insertFront(i);
		}
		if (i == 6) {
			iter = list.tail;
		}

	}
	list.insert(iter, 33);
	std::cout << list.getSize() << std::endl;
	list.showList();
}