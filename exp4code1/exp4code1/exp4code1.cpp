#include <iostream>
using namespace std;

int main() {

	cout << "Enter ten numbers:";
	int dNumbers[10]{-1};
	int num;
	int n = 0;
	for (int i = 0; i < 10; i++) {
		bool isRepeat = false;
		cin >> num;
		for(int j = 0;j<=n;j++){
			if (num == dNumbers[j]) {
				isRepeat = true;
			}
		}
		if (isRepeat == false) {
			dNumbers[n] = num;
			n++;
		}
	}

	cout << "The distinct numbers are: ";
	for (int i = 0; i < n; i++) {
		if (dNumbers[i] == -1) { break; }
		cout << dNumbers[i] << " ";
	}

	return 0;
}