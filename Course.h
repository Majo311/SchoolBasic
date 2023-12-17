#pragma once
#include <string>
#include <map>
#include <vector>
#include "Student.h"

class Course
{
private:
	std::string _name;
	/*
	* every course has own list or map of interest whith  are appropiate for student
	*/
	std::map<std::string, bool>interestTable;
	std::vector<Student>assignedStudents;
public:
	Course();
	Course(std::string courseName);
	Course(std::string courseName, std::vector<std::string>appropiateInterests);
	std::string GetName();
	bool IsCourseSuitableForStudent(std::string students_interest);
	void AssigneToCourse(Student student);
	~Course();

};
