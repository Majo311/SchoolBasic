#pragma once
#include "Person.h"

class Teacher :public Person
{
private:
public:
	Teacher();
	Teacher(std::string name, int age);
	void init(const std::string& name, const int& age);
	~Teacher();

};
