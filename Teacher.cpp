#include "Teacher.h"

Teacher::Teacher()
{

}
Teacher::Teacher(std::string name, int age)
{
	init(name, age);
}
void Teacher::init(const std::string& name, const int& age)
{
	Person::init(name, age);
}
Teacher::~Teacher()
{

}
