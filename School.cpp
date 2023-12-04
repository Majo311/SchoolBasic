#include "School.h"


School::School()
{
}

void School::assignStudentToNewClassroom(Student student, int newClassroomNumber)
{
	student.setClassRooomNumber(newClassroomNumber);
}

void School::addStudentToCourse(Student student)
{
	// your implementation
}

void School::addStudent(Student student)
{
	_students.push_back(student);
}

Student* School::getStudent(int index)
{
	int i = 0;
	for (auto& s : _students)
	{
		if (i == index)
		{
			return &s;
			break;
		}
		i++;
	}
	return  nullptr;
}

School::~School()
{
}