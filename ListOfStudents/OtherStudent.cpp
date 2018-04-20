#include "OtherStudent.h"

OtherStudent::OtherStudent(std::string, int grade, int id)
{
	this->name = name;
	this->grade = grade;
	this->id = id;
	++counter;
}
OtherStudent::~OtherStudent(){}
int OtherStudent::counter = 1;
void OtherStudent::setName(std::string name)
{
	this->name = name;
}
std::string OtherStudent::getName()
{
	return name;
}
void OtherStudent::setGrade(int grade)
{
	this->grade = grade;
}
int OtherStudent::getGrade()
{
	return grade;
}

void OtherStudent::setId(int)
{
	this->id = counter;
}

int OtherStudent::getId()
{
	return id;
}

int OtherStudent::getCounter()
{
	return counter;
}
