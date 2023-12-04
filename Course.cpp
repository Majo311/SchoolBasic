#include "Course.h"
#include "Student.h"

Course::Course()
{

}

std::wstring Course::GetName()
{
	return _name;
}

bool Course::IsCourseSuitableForStudent(std::wstring students_interest)
{
	for (const auto& [key, value] : interestTable)
	{
		if (key == students_interest)
		{
			return interestTable[students_interest];
		}
	}
	return false;
}

void Course::AssigneToCourse(Student student)
{
	assignedStudents.push_back(student);
}

Course::~Course()
{
}
