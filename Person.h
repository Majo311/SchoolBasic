#pragma once
#include <string>
#include <map>

class Person
{

private:
	std::wstring _interest;
	std::string _name;
	int _age = 0;
public:
	Person();
	Person(std::string name, int age, std::wstring interest = NULL);
	~Person();

	void init(const std::string& name, const int& age);

	std::string getName();
	int getAge();

	void addInterestToPerson(const std::wstring& interest);

	std::wstring getInterest();

	virtual void printInfo();
};