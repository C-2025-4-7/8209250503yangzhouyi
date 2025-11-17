#include <iostream>
#include <iomanip>
int main() {
	std::cout << "输入正数a" << std::endl;
	double a;
	std::cin >> a;
	double x = a;
	double y = 0;
	if (a <= 0) {
		std::cout << "应该输入正数" << std::endl;
		return 0;
	}
	while (abs(x - y) > 10e-5) {
		y = x;
		x = 0.5 * (x + a / x);
	}
	std::cout << x << std::endl;
	return 0;
}