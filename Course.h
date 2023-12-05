#pragma once
#include <string>
#include <map>
#include <vector>
#include "Student.h"

class Course
{
private:
	std::string _name;
	std::map<std::string, bool>interestTable;
	std::vector<Student>assignedStudents;
public:
	Course();
	std::string GetName();
	bool IsCourseSuitableForStudent(std::string students_interest);
	void AssigneToCourse(Student student);
	~Course();

};
