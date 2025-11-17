#include <iostream>
#include <iomanip>
int main() {
	std::cout << "输入算式，以空格分割数和字符" << std::endl;
	double a, c;
	char b;
	std::cin >> a >> b >> c;
	switch(b) {
		case '+':
			std::cout << std::fixed << std::setprecision(2) << a + c << std::endl;
			break;
		case '-':
			std::cout << std::fixed << std::setprecision(2) << a - c << std::endl;
			break;
		case '*':
			std::cout << std::fixed << std::setprecision(2) << a * c << std::endl;
			break;
		case '/':
			if (c != 0)
				std::cout << std::fixed << std::setprecision(2) << a / c << std::endl;
			else
				std::cout << "除数不能为零" << std::endl;
			break;
		case '%':
			if (c != 0) {
				std::cout << std::fixed << std::setprecision(2) << static_cast<int>(a) % static_cast<int>(c) << std::endl;
			}
			else {
				std::cout << "除数不能为零" << std::endl;
			}
			break;
		default:
			std::cout << "不支持运算符" << std::endl;
	}
}