#include<iostream>
using namespace std;

#define MAX 353333


class arr {
public:
	int key = -1
	int value = -1;
	bool flag = false;
};
arr HashArr[MAX];
int sz = 0;

int hashfunc(int idx) {
	return idx % MAX;
}

int hashfunc2(int idx) {
	return (17 - (idx % 17));
}

void clearArr() {
	for (int i = 0; i < MAX; i++) {
		HashArr[i].value = -1;
		HashArr[i].flag = false;
	}

	return;
}

void insert(int _data) {
	int probeing = 1;
	while (HashArr[hashfunc(_data) 
		+ hashfunc2(_data) * (probeing - 1)].flag != false) {
		probeing++;
	}

	HashArr[hashfunc(_data)
		+ hashfunc2(_data) * (probeing - 1)].flag = true;
	HashArr[hashfunc(_data)
		+ hashfunc2(_data) * (probeing - 1)].key = probeing;
	HashArr[hashfunc(_data)
		+ hashfunc2(_data) * (probeing - 1)].value = _data;
}

void find(int _data) {
	int probeing = 1;
	while (HashArr[hashfunc(_data)
		+ hashfunc2(_data) * (probeing - 1)].flag != false) {
		if (HashArr[hashfunc(_data)
			+ hashfunc2(_data) * (probeing - 1)].value == _data) {
			cout << 1 << " " << probeing << endl;
			return;
		}
		probeing++;
	}
	cout << 0 << " "<<probeing << endl;
}
int main() {
	int tc,n,intInput;
	cin >> tc;
	while (tc--) {
		clearArr();
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> intInput;
			insert(intInput);
		}
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> intInput;
			find(intInput);
		}
	}


}