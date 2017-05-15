#pragma once

using namespace std;

class Student {
private:
	string firstName;
	string lastName;
	string address;
	string city;
	int64_t phone;
	int age;

public:
	Student();
	~Student();
	
	Student(string, string, string, string, int64_t, int);

};