#include <iostream>
using namespace std;

void sort(int lst[10]) {
	bool changed = true;

	for (int i = 9; i > 0; i--) {
		if (changed == false) {
			return;
		}
		for (int j = 0; j < i; j++) {
			if (lst[j] > lst[j + 1]) {
				int temp = lst[j];
				lst[j] = lst[j + 1];
				lst[j + 1] = temp;
				changed = true;
			}
		}
	}

}

int main() {
	int lst[10]{ -1 };
	for (int i = 0; i < 10; i++) {
		cin >> lst[i];
	}


	sort(lst);
	for (int i = 0; i < 10; i++) {
		cout << lst[i] << " ";
	}


	return 0;
}