#include <iostream>
#include "mytemperature.h"
using namespace std;

int main() {
	cout <<"cel" <<"     "<<"fah" <<"    |    " << "fah" << "    " << "cel" <<endl;
	for (double a = 40.0; a >= 31.0; a -= 1.0) {
		cout << a << "     " << celsius_to_fah(a) << "    |    " << (a-30.0)*10+20 << "    " << fahrenheit_to_cels((a - 30.0) * 10 + 20) << endl;
	}
	return 0;
}