#include <iostream>
#include <iomanip>
int main() {
	std::cout << "输入三角形的三边长:" << std::endl;
	double a, b, c;
	std::cin >> a >> b >> c;
	bool flag;
	if (a + b > c && a + c > b && b + c > a) { flag = true; }
	else { flag = false; std::cout << "并非三角形" << std::endl; }
	bool isDengYao;
	if (flag && (std::abs(a - b) < 1e-9 || std::abs(a - c) < 1e-9 || std::abs(b - c) < 1e-9)) {
		std::cout << "等腰" << std::endl;
	}
	if (flag) {
		std::cout << "周长为" << std::setprecision(4) << a + b + c << std::endl;
	}
	return 0;
}