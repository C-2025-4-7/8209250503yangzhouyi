#include <iostream>
using namespace std;
int indexOf(const char s1[],const char s2[]) {
    int n = (int)strlen(s1);
    int m = (int)strlen(s2);
    for (int i = 0; i <= n - m; ++i) {
        int j = 0;
        for (; j < m; ++j) {
            if (s1[i + j] != s2[j]) break;
        }
        if (j == m) return i; // 返回从0开始的索引
    }
    return 1;
}
int main() {
    char str1[256];
    char str2[256];

    cout << "enter the first string: ";
    cin.getline(str1, sizeof(str1));   
    cout << "enter the second string: ";
    cin.getline(str2, sizeof(str2));
	cout <<"indexOf(" <<str1 <<","<<str2<<")"<<" is " <<indexOf(str2, str1) << endl;
}