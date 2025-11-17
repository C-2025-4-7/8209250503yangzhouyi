#include <iostream>
int main() {
	char a;
	std::cin >> a;
	if (a >= 'a' && a <= 'z') {
		a = a - 32;
	}
	std::cout << a << std::endl;
	return 0;

}