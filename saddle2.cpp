//============================================================================
// Name        : saddle2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
# define r 3
# define c 3
class saddle {
	int x[r][c];
public:
	saddle();
	void takeuserinput();
	void display();
	void find();
};
saddle::saddle() {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			x[i][j] = 0;
		}
	}
}
void saddle::takeuserinput() {
	cout << "ENTER ELEMENTS" << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> x[i][j];
		}
	}
}
void saddle::display() {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << x[i][j];
		}
		cout << endl;
	}
}
void saddle::find() {
	int min = 0, i1 = 0, j1 = 0, i2 = 0, j2 = 0, max = 0;
	for (int i = 0; i < r; i++) {
		min = x[i][0];
		for (int j = 0; j < c; j++) {
			if (min >=x[i][j]) {
				min = x[i][j];
				i1 = i;
				j1 = j;
			}
		}
		max = x[0][j1];
		for (int k = 0; k < r; k++) {
			if (max <= x[k][j1]) {
				max = x[k][j1];
				j2 = j1;
				i2 = k;
			}
		}

		if (i1 == i2 && j1 == j2) {
			cout << "SADDLE EXIST   " << x[i1][j1];
			return;
		}
	}
	cout << "NO SADDLE POINT EXIST   " << endl;
}
int main() {
	saddle s;
	s.takeuserinput();
	s.display();
	s.find();
	return 0;
}
