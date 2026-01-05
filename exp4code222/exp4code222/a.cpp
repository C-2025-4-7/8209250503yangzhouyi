#include <iostream>
using namespace std;

void sort(int lst[],int n) {
	bool changed = true;

	for (int i = n-1; i > 0; i--) {
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
	int n;
	cin >> n;
	int* lst = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> lst[i];
	}


	sort(lst,n);
	for (int i = 0; i < n; i++) {
		cout << *(lst+i) << " ";
	}
	delete[] lst;

	return 0;
}