#include "Employee.h"

Employee::Employee(string firstName, string lastName, string position, int year, double salary)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->position = position;
	this->year = year;
	this->salary = salary;
}

Employee::~Employee()
{
}

string Employee::getFirstName() const
{
	return firstName;
}

void Employee::setFirstName(string firstName)
{
	this->firstName = firstName;
}

string Employee::getLastName() const
{
	return lastName;
}

void Employee::setLastName(string lastName)
{
	this->lastName = lastName;
}

string Employee::getPosition() const
{
	return position;
}

void Employee::setPosition(string position)
{
	this->position = position;
}

int Employee::getYear() const
{
	return year;
}

void Employee::setYear(int year)
{
	this->year = year;
}

double Employee::getSalary() const
{
	return salary;
}

void Employee::setSalary(double salary)
{
	this->salary = salary;
}
