#pragma once
#include <vector>
#include <string>
#include <list>
#include "Person.h"
using namespace std;
class FileReader
{
private:
	std::vector<std::string>_allLines;
	void GetAllLines(std::wstring file);
	Person GetPersonFromLine(std::string line);
	vector<string> split(const string& str, const string& delim);
public :
	FileReader();
	std::list<Person> GetPersonsFromFile(std::wstring file);


	~FileReader();

};
