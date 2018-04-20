#include "OtherStudent.h"

OtherStudent::OtherStudent(std::string name, int grade)
{
	this->name = name;
	this->grade = grade;
	this->id = counter;
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
int OtherStudent::getId()
{
	return id;
}
int OtherStudent::getCounter()
{
	return counter;
}
