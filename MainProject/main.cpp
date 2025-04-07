#include "student.h"

//void show(Student st) {
//	cout << "Name: " << st.name << endl;
//	cout << "Age: " << st.age << endl;
//	cout << "Mark: " << st.avg_mark << endl;
//	cout << "Alive: " << (st.alive ? "yes" : "not") << endl;
//}

int main() {
	Student st1, st2;

	st1.name = "Matthew";
	st1.age = 15;
	st1.avg_mark = 9.2;
	st1.alive = true;

	st2.name = "Vlad";
	st2.age = 13;
	st2.avg_mark = 9;
	st2.alive = true;

	cout << st1.getString() << endl;
	cout << st2.getString() << endl;

	//string name = st1.avg_mark > st2.avg_mark ? st1.name : st2.name;
	Student t = st1.avg_mark > st2.avg_mark ? st1 : st2;
	cout << "Best student name is " << t.name << endl;

	return 0;
}