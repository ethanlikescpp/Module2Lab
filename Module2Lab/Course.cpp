#include "stdafx.h"
#include "Course.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;


Course::Course() {
	Student *student1 = new Student("Bob", "Andrews", "343 Hill Street", "San Fransisco", 6508891234, 23);
	Student *student2 = new Student("John", "Doe", "654 Blueberry Road", "San Jose", 9874561238, 21);
	Student *student3 = new Student("Jane", "Doe", "347 Mountain Way", "Oakland", 7896541238, 21);
	Teacher *prof = new Teacher("John", "Smith", "555 Straight Lane", "San Fransisco", 6509872345, 43);
}

Course::~Course() {
}
