#include <iostream>
using namespace std;

void count(const char s[], int counts[]) {
	int len = (int)strlen(s);
	for (int i = 0; i < len; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			counts[s[i] - 'a']++;
		} else if (s[i] >= 'A' && s[i] <= 'Z') {
			counts[s[i] - 'A']++;
		}
	}
}

int main() {
	int counts[26] = { 0 };
	char s[100];
	cout << "Enter a string: ";
	cin.getline(s, 100);
	count(s, counts);
	for (int i = 0; i < 26; i++) {
		cout << (char)('a' + i) << " :"<<counts[i]<<"times"<<endl;
	}
	return 0;
}