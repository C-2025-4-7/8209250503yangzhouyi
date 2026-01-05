#include <iostream>
using namespace std;

int total(int left,int days) {
	if (days == 0) {
		return left;
	}
	else {
		return total((left+1)*2, days - 1);
	}
}

int main() {
	cout << total(1, 2) << endl;
	return 0;
}