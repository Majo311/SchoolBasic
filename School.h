#pragma once
#include <vector>
#include "Student.h"
#include <list>
#include "Course.h"

class School
{
private:
	std::vector<Course*> _courses;
	std::list<Student> _students;
public:
	School();
	~School();

	void assignStudentToNewClassroom(Student student, int newClassroomNumber);

	void addStudentToCourse(Student student);

	void addStudent(Student student);

	Student* getStudent(int index);
};
