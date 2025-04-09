//private:
//
//protected:
//
//public:
#include"util.h"
class Student { 
public:
	string name;
	int age;
	double avg_mark;
	bool alive;
	//default costructor or construcotr without arguments
	Student() {
		cout << "Default-costructor..." << endl;
		name = "nn";
		age = 13;
		avg_mark = 4.0;
		alive = true;
	}
	//constructor with arguments
	Student(string nm) {
		cout << "Constructor with arguments..." << endl;
		name = nm;
		age = 13;
		avg_mark = 4.0;
		alive = true;
	}
	//canonical costructor
	Student(string nm, int a, double m, bool al) {
		cout << "Canonical construct..." << endl;
		name = nm;
		age = a;
		avg_mark = m;
		alive = al;
	}
	//copy-constructor
	Student(const Student& student) {
		cout << "Copy-construct..." << endl;
		name = student.name;
		age = student.age;
		avg_mark = student.avg_mark;
		alive = student.alive;
	}
	//destructor
	~Student() {
		cout << "Destructor..." << endl;
	}

	string toString() {
		string s = "Name: " + name;
		s += (", age: " + to_string(age));
		s += ", mark: " + to_string(avg_mark);
		s += ", alive: ";
		s += (alive ? "yes" : "not");
		return s;
	}


};