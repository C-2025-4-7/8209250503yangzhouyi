#include <iostream>
using namespace std;

void change(bool boxes[100], int index, int bc) {
	while (index<100){
		boxes[index] = !boxes[index];
		index += bc;
	}
}
int main() {
	bool boxes[100]{ false };
	
	for (int i = 0; i < 100; i++) {
		change(boxes, i, i + 1);
	}

	for (int i = 0; i < 100; i++) {
		if (boxes[i]) {
			cout << (i + 1) << " ";
		}
	}
	return 0;
}