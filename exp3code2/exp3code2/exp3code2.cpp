#include <iostream>
using namespace std;

bool is_prime(int num){
	for(int i =2; i*i<=num; i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}

int main() {
	int n = 0, num = 2;
	while (n < 200) {
		if (is_prime(num)) {
			cout << num << " ";
			n++;
			if (n % 10 == 0) {
				cout << endl;
			}
		}
		num++;
	}
	return 0;
}