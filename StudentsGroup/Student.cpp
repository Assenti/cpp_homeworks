#include "Student.h"

Student::Student()
{
}
Student::~Student()
{
}
void Student::setName(std::string _name)
{
	name = _name;
}
std::string Student::getName()
{
	return name;
}
void Student::setAge(int _age)
{
	age = _age;
}
int Student::getAge()
{
	return age;
}
void Student::setRating(double _rating)
{
	rating = _rating;
}
double Student::getRating()
{
	return rating;
}