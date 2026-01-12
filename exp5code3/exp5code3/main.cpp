#include <iostream>
class rec {
	private:
		double length;
		double width;
		double height;
	public:
		rec(double l, double w, double h) {
			length = l;
			width = w;
			height = h;
		}
		double volume() {
			return length * width * height;
		}
};

int main() {
	int lst[3][3];
	for(int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cin >> lst[i][j];
		}
	}
	rec* a;

	for (int i = 0; i < 3; i++) {
		a = new rec(lst[i][0], lst[i][1], lst[i][2]);
		std::cout<<a->volume()<<std::endl;
		delete a;
	}
	return 0;
}