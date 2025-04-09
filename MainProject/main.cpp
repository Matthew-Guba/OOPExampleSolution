#include "teacher.h"

int main() {
	Student student1{};
	//Student student2("Alex");
	//Student student3("Alex", 72, 4.123, true);
	//Student student4(student2);

	Student student2{ "Alex" };
	//Student student3("Alex", 72, 4.123, true);

	Student student3{ "Alex", 13, 4.01, true };
	Student student4{student2};

	cout << student1.toString() << endl;
	cout << student2.toString() << endl;
	cout << student3.toString() << endl;
	cout << student4.toString() << endl;

	return 0;

}