#include"util.h"
class Student {
//private:
//
//protected:
//
//public:
	   
public:
	string name;
	int age;
	double avg_mark;
	bool alive;

	string getString() {
		string s = "Name: " + name;
		s += (", age: " + to_string(age));
		s += ", mark: " + to_string(avg_mark);
		s += ", alive: ";
		s += (alive ? "yes" : "not");
		return s;
	}


};