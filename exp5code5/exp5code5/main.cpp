#include <iostream>
using namespace std;
class Point {
	private:
		int x;
		int y;
	public:
		Point(int x = 0, int y = 0) { 
			this->x = x; this->y = y; 
		}
		void setPoint(int i, int j) { 
			this->x = x+i; this->y = y+j; 
		}
		void display() { 
			cout << "Point(" << x << ", " << y << ")" << endl; 
		}


};
int main() {
	
	Point p1(60, 80);
	p1.setPoint(5, 6);
	p1.display();
	return 0;
}