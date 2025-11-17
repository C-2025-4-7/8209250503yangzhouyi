#include <iostream>
int main() {
	double x;
	double y;
	bool flag = true;
	std::cin >> x;
	if (x > 0 && x < 1) {
		y = 3 - 2 * x;
	}else if (x>=1 && x<5) {
		y = 1 / (2 * x) + 1;
	}
	else if (x >= 5 && x < 10) {
		y = x * x;
	}
	else {
		std::cout << "不在定义域" << std::endl;
		flag = false;

	}
	if (flag) {
		std::cout << "y=" << y << std::endl;
	}
}