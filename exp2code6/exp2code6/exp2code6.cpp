#include <iostream>
int main() {
	std::cout << "输入2个正整数" << std::endl;
	int A, B;
	std::cin >> A>> B;//a=kx,b=ky
	int a = A;
	int b = B;
	while(true) {
		if (a == b) {
			std::cout << "最大公约数是：" << a << std::endl;
			break;
		}
		else if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}

	}
	std::cout << A * B << std::endl;
	std::cout << 4362897 / 11 << std::endl;
	std::cout << "最小公倍数是：" << (A * B) / a << std::endl;
	return 0;
}