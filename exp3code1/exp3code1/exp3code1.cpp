#include <iostream>
using namespace std;

int gcd(int a,int b) {
	int A = a, B = b;
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	int c = A * B / a;
	return a;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	return 0;
}