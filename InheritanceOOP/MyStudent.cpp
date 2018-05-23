#include "MyStudent.h"

int MyStudent::counter = 0;

MyStudent::MyStudent(std::string _name)
{
	name = _name;
	++counter;
	id = counter;
}

void MyStudent::info()
{
	std::cout << "I am student, my name is " <<
		name << " and id is " << id << std::endl;
}


MyStudent::~MyStudent()
{
}
