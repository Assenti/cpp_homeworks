#include "Human.h"

Human::Human()
{
}

Human::Human(std::string firstName, std::string lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
}

Human::~Human()
{
}

std::string Human::getFirstName()
{
	return firstName;
}

std::string Human::getLastName()
{
	return lastName;
}
