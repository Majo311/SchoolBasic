#pragma once
#include <vector>
#include "Student.h"
#include <list>
#include "Course.h"

class School
{
private:
	std::vector<Course> _courses;
	std::list<Student> _students;
    bool isStudentAllreadyAssigned( Student student);
public:
	School();
	~School();

	void assignStudentToNewClassroom(Student student, int newClassroomNumber);

	void addStudentToCourse(Student student);

	void addStudent(const Student &student);

	Student* getStudent(int index);
};
