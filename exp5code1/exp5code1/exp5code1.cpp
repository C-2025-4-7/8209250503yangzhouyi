#include <iostream>
using namespace std;
class Time {
	private:
		int hour;
		int minute;
		int sec;
	public:
		void setTime(int h, int m, int s) {
			hour = h;
			minute = m;
			sec = s;
		}
		void showTime() {
			cout << hour << ":" << minute << ":" << sec << endl;
		}

};
int main() {
	Time tl;
	int h, m, s;
	cin >> h >> m >> s;
	tl.setTime(h, m, s);
	tl.showTime();

}