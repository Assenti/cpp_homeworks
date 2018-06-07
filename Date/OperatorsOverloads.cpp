#include "OperatorsOverloads.h"

OperatorsOverloads::OperatorsOverloads()
{
}

bool OperatorsOverloads::operator>(const OperatorsOverloads & other) const
{
	return this->salary > other.salary
		&& this->experience > other.experience;
}

bool OperatorsOverloads::operator<(const OperatorsOverloads &other) const
{
	return this->salary < other.salary
		&& this->experience < other.experience;
}

bool OperatorsOverloads::operator<=(const OperatorsOverloads &other) const
{
	return this->salary <= other.salary
		&& this->experience <= other.experience;
}

bool OperatorsOverloads::operator>=(const OperatorsOverloads &other) const
{
	return this->salary >= other.salary
		&& this->experience >= other.experience;
}

bool OperatorsOverloads::operator==(const OperatorsOverloads &other) const
{
	return this->salary == other.salary;
	//&& this->experience == other.experience;
}

void OperatorsOverloads::operator=(const int salary)
{
	this->salary = salary;
}

void OperatorsOverloads::operator+=(const int value)
{
	this->salary += value;
}

OperatorsOverloads & OperatorsOverloads::operator++()
{
	++this->salary;
	return *this;
}

OperatorsOverloads & OperatorsOverloads::operator++(int)
{
	OperatorsOverloads prev = *this;
	++this->salary;
	return prev;
}

int OperatorsOverloads::getSalary()
{
	return salary;
}

void OperatorsOverloads::setSalary(int)
{
	this->salary = salary;
}

int OperatorsOverloads::getExperience()
{
	return experience;
}

void OperatorsOverloads::setExperience(int experience)
{
	this->experience = experience;
}

OperatorsOverloads::~OperatorsOverloads()
{
}
