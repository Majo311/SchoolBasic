#pragma once
#include <string>
#include <map>

class Person
{

private:
	std::string _interest;
	std::string _name;
	int _age = 0;
	std::string type;
public:
	Person();
	Person(std::string name, int age, std::string interest = NULL);
	~Person();

	void init(const std::string& name, const int& age);

	std::string getName();
	int getAge();

	void addInterestToPerson(const std::string& interest);

	std::string getInterest();

	void SetType(std::string);
	std::string GetType();

	virtual void printInfo();
};