#include "student.h"

class Teacher {
private:
	const int BEST_MARK = 9;

	int countAllBestSt(Student* students, int size) {
		return 0;
	}

public:
	Student* getAllBestStudents(Student* group, int size, int* count) {
		*count = countAllBestSt(group, size);
		for (int i = 0; i < size; i++) {
			if (group[i].avg_mark >= BEST_MARK) {
				return group[i];
			}
		}

		Student empty;
		return empty;
	}

};