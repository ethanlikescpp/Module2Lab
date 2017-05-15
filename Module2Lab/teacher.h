#pragma once

using namespace std;

class Teacher {
private:
	string firstName;
	string lastName;
	string address;
	string city;
	int64_t phone;
	int age;

public:
	Teacher();

	Teacher(string, string, string, string, int64_t, int);

	void GradeStudent();
	void SitInClass();

	~Teacher();
};