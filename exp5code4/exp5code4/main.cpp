#include <iostream>
using namespace std;
class Student {
	public:
	int num;
	float score;
	Student(int n, float s)  {
		num = n;
		score = s;
	}
};
int max(Student *lst){
	Student *maxStudent = lst;
	for (int i = 0; i < 5;i++) {
		if (lst[i].score > maxStudent->score) {
			maxStudent = &lst[i];
		}
	}
	cout  << maxStudent->score << endl;
	return maxStudent->num;
}
int main() {
	Student lst[5] = {
		Student(1, 85.5),
		Student(2, 90.0),
		Student(3, 78.5),
		Student(4, 92.0),
		Student(5, 88.0)
	};
	max(lst);
	return 0;
}