#include "FileReader.h"
#include "Student.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Teacher.h"

FileReader::FileReader()
{
}
vector<string> FileReader::split(const string& str, const string& delim)
{
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do
    {
        pos = str.find(delim, prev);
        if (pos == string::npos) pos = str.length();
        string token = str.substr(prev, pos - prev);
        if (!token.empty()) tokens.push_back(token);
        prev = pos + delim.length();
    } 
    while (pos < str.length() && prev < str.length());
    return tokens;
}
void FileReader::GetAllLines(std::string _file)
{
    std::fstream file(_file);
    std::string line;
    while (std::getline(file,line))
    {
        _allLines.push_back(line);
    }
}
Person FileReader::GetPersonFromLine(std::string line)
{
    std::vector<string>personInfo =split(line, " ");
    if (personInfo[2].compare("student"))
    {
         Student s(personInfo[0], std::stoi(personInfo[1]), personInfo[3]);
         return s;
    }
    else 
        if (personInfo[2].compare("teacher"))
        {
            Teacher t(personInfo[0], std::stoi(personInfo[1]));
            return t;
        }
        else
        {
            //bed data in source file
        }
}

std::list<Person> FileReader::GetPersonsFromFile(std::string file)
{
    std::list<Person> result;
    GetAllLines(file);
    for (auto line : _allLines)
    {
        result.push_back(GetPersonFromLine(line));
    }
    return result;
}


FileReader::~FileReader()
{
}
