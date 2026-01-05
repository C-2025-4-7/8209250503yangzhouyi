#include <iostream>
using namespace std;

int parseHex(const char *const hexString) {
	int n = strlen(hexString);
	int a = 0;
	int add = 0;
	for (int i = 0; i < n; i++) {
		add = 0;
		if (hexString[i] >= '0' && hexString[i] <= '9') add=(int)hexString[i] - '0';
		else if (hexString[i] >= 'A' && hexString[i] <= 'F') add=(int)hexString[i] - 'A' + 10;
		else if (hexString[i] >= 'a' && hexString[i] <= 'f') add=(int)hexString[i] - 'a' + 10;
		a = a * 16 + add;
		
	}
	return a;
}
int main() {
	cout << parseHex("A5") << endl; 
}