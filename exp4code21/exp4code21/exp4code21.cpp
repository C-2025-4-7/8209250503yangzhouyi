#include <iostream>
using namespace std;
void main() {
	int i, j, * pi, * pj;
	pi = &i; pj = &j;
	cout << pi << '\t' << pj << endl;
	i = 5; j = 10;
	cout << i << '\t' << j << '\t'<<pi<<'\t'<<pj<<endl;
	cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j << endl;



}