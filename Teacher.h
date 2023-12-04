#pragma once
#include "Person.h"

class Teacher :public Person
{
private:
public:
	Teacher();
	void init(const std::string& name, const int& age);
	~Teacher();

};
