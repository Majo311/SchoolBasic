#pragma once
#include "Person.h"

class Student :public Person
{
private:
	int classroomNumber;//	Person();
public:
	Student();
	Student(std::string name, int age, std::string interest = NULL);
	~Student();

	void init(const std::string& name, const int& age, const int& ClassroomNumber);
	void setClassRooomNumber(int _classRoomNumber);
	void printInfo() override;
};

