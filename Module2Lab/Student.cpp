#include "stdafx.h"
#include <iostream>
#include "Student.h"

using namespace std;

Student::Student() {
}

Student::Student() {
}

Student::Student(string fName, string lName, string someaddress, string somecity, int64_t theirphone, int theirage) {
	firstName = fName;
	lastName = lName;
	address = someaddress;
	city = somecity;
	phone = theirphone;
	age = theirage;
}

Student::~Student() {
}