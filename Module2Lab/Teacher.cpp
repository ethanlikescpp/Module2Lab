#include "stdafx.h"
#include <iostream>
#include "Teacher.h"

using namespace std;

Teacher::Teacher() {
}

Teacher::~Teacher() {
}

Teacher::Teacher(string fName, string lName, string someaddress, string somecity, int64_t theirphone, int theirage) {
	firstName = fName;
	lastName = lName;
	address = someaddress;
	city = somecity;
	phone = theirphone;
	age = theirage;
}

// Void -> Void
// Prints the words "Student Graded" out
void Teacher::GradeStudent() {
	cout << "Student Graded" << endl;
}

// Void -> Void
// Prints the words "Sitting in front of class" out
void Teacher::SitInClass() {
	cout << "Sitting in front of class" << endl;
}