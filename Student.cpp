#include "Student.h"
#include <iostream>



Student::Student()
{

}

void Student::printInfo()
{
	std::cout << "Name: " << Person::getName() << " Age: " << Person::getAge() << " Classroom number :" << classroomNumber << std::endl;
}


void Student::init(const std::string& name, const int& age, const int& ClassroomNumber)
{
	Person::init(name, age);
	classroomNumber = ClassroomNumber;
}
void Student::setClassRooomNumber(int _classRoomNumber)
{
	classroomNumber = _classRoomNumber;
}
Student::~Student()
{
}