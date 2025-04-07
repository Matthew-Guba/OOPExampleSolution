#include "teacher.h"


int main() {
	Student* list = nullptr;
	int size;

	cout << "Input numbers of students: ";
	cin >> size;

	list = new Student[size];

	for (int i = 0; i < size; i++) {
		cout << "Student number: \n" << i + 1 << endl ;
		cout << "name: ";
		cin >> list[i].name;

		cout << "age: ";
		cin >> list[i].age;

		cout << "mark: ";
		cin >> list[i].avg_mark;

		cout << "is alive(y/n): ";
		char answer;
		cin >> answer;

		list[i].alive = islower (answer) == 'y';

	}

	Teacher teacher;

	Student result = teacher.getAllBestStudents(list, size);

	string msg =result.alive ? result.name : "There are no best students";

	cout << "Best stud is: " << msg;

	return 0;
}