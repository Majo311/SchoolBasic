#pragma once
#include <string>
#include <map>
#include <vector>
#include "Student.h"

class Course
{
private:
	std::wstring _name;
	std::map<std::wstring, bool>interestTable;
	std::vector<Student>assignedStudents;
public:
	Course();
	std::wstring GetName();
	bool IsCourseSuitableForStudent(std::wstring students_interest);
	void AssigneToCourse(Student student);
	~Course();

};
