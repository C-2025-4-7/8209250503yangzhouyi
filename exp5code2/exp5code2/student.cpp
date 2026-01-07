#include <iostream>
#include "student.h"
void Student::display() {
	std::cout << "Num: " << num << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Sex:" << sex << std::endl;
}
void Student::set_values(int n,  const char* nm, char s) {
	num = n;
	memcpy(name, nm, 20);
	sex = s;
}
