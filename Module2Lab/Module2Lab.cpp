#include "stdafx.h"
#include <iostream>
#include "Teacher.h"
#include "Student.h"
#include "Course.h"

using namespace std;


int main()
{
	Course *math = new Course("Science");
	math->DisplayName();

    return 0;
}

