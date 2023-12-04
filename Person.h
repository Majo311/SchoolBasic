#pragma once
#include <string>
#include <map>

class Person
{

private:
	std::map<std::wstring, bool> _interests;
	std::string _name;
	int _age = 0;
public:
	Person();
	~Person();

	void init(const std::string& name, const int& age);

	std::string getName();
	int getAge();

	void addInterestToPerson(const std::wstring& interest);

	std::map<std::wstring, bool> getInterests();

	virtual void printInfo();
};