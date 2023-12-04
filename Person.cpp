#include "Person.h"
#include <iostream>
#include <map>

Person::Person()
{
}

Person::Person(std::string name, int age, std::wstring interest)
{
	_name = name;
	_age = age;
	_interest = interest;
}

void Person::init(const std::string& name, const int& age)
{
	_name = name;
	_age = age;
}

std::string Person::getName()
{
	return _name;
}

int Person::getAge()
{
	return _age;
}

void Person::addInterestToPerson(const std::wstring& interest)
{
	_interest = interest;
}

std::wstring Person::getInterest()
{
	return _interest;
}

void Person::printInfo()
{
	std::cout << "Name: " << _name << " Age: " << _age << std::endl;
}
Person::~Person()
{
}
