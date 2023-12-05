#include <iostream>
#include "Student.h"
#include "School.h"
#include "FileReader.h"

int main(int argc, char** argv)
{
	School school;
	{
		Student* s = new Student();
		s->init("Jozko Mrkvicka", 18, 1);
		std::cout << "Age of Jozko is : " << s->getAge() << std::endl;
	}

	Student student2;
	student2.init("Palko Mrkvicka", 19, 2);
	school.addStudent(student2);
	school.assignStudentToNewClassroom(student2, 5);

	Student* palkoStudentPtr = school.getStudent(0);
	palkoStudentPtr->printInfo();

	Student student3;
	student3.init("Janka Mrkvickova", 20, 3);
	school.addStudent(student3);
	school.assignStudentToNewClassroom(student3, 4);
	palkoStudentPtr->printInfo();

	FileReader fileReader;
	fileReader.GetPersonsFromFile("Res/dataset.txt");

	system("pause");
	return 0;
}
