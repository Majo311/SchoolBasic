#pragma once
#include <string>

class Course
{
private:
	std::wstring _name;
public:
	Course();
	~Course();
	std::wstring GetName();
};
