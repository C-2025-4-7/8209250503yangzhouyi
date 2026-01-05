#include <iostream>
using namespace std;
void merge(const int list1[],int size1,const int list2[],int size2,int list3[]) {
	int index1 = 0, index2 = 0, index3 = 0;
	while (index1 < size1 && index2 < size2) {
		if (list1[index1] < list2[index2]) {
			list3[index3++] = list1[index1++];
		}
		else {
			list3[index3++] = list2[index2++];
		}
	}
	if (index1 < size1) {
		while(index1<size1){
			list3[index3++]=list1[index1++];
		}
	}
	else{
		while (index2 < size2) {
			list3[index3++] = list2[index2++];
		}
	}
}
int main() {
	int list1[80]{ -1 }, list2[80]{ -1 }, list3[160]{-1};
	cout << "Enter list1:";
	int size1;
	cin >> size1;
	for (int n = 0; n < size1; n++) {
		cin >> list1[n];
	}
	cout << "Enter list2:";
	int size2;
	cin >> size2;
	for (int n = 0; n < size2; n++) {
		cin >> list2[n];
	}

	cout << "The merged list is:";
	merge(list1, size1, list2, size2, list3);
	for (int n = 0; n < size1 + size2; n++) {
		cout << list3[n] << " ";
	}
	return 0;
}