#include <iostream>
int main() {
	double sum = 0;
	const double cost = 0.8;
	int day = 1;
	int num = 2;
	int numsum = 0;
	while (numsum <= 100) {
		sum += cost * num;
		numsum += sum;
		day += 1;
		num *= 2;

	}
	day -= 1;
	sum -= cost * (num / 2);
	std::cout << sum / day << std::endl;
	return 0;
}