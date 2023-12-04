#pragma once
#include "Person.h"

class Student :public Person
{
private:
	int classroomNumber;
public:
	Student();
	~Student();

	void init(const std::string& name, const int& age, const int& ClassroomNumber);
	void setClassRooomNumber(int _classRoomNumber);
	void printInfo() override;
};

