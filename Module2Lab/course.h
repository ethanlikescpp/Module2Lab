#pragma once

#include "stdafx.h"

using namespace std;

class Course {
private:
	string coursename;

public:
	Course();
	~Course();

	Course(string);
	void DisplayName();
};