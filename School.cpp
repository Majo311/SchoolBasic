#include "School.h"
#include <iostream>


bool School::isStudentAllreadyAssigned( Student student)
{
	for (auto s : _students)
	{
		if (s.getName() == student.getName())
		{
			return true;
		}
	}
	return false;
}

School::School()
{
}

void School::assignStudentToNewClassroom(Student student, int newClassroomNumber)
{
	student.setClassRooomNumber(newClassroomNumber);
}

void School::addStudentToCourse(Student student)
{
	for(Course course : _courses)
	{
		if (course.IsCourseSuitableForStudent(student.getInterest()))
		{
			course.AssigneToCourse(student);
			break;
		}
	}
}

void School::addStudent(const Student& student)
{
	if(!isStudentAllreadyAssigned(student))
	_students.push_back(student);
	else
		std::cout <<"Student is allready added" << std::endl;

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
