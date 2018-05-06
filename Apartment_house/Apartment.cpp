#include "Apartment.h"

int Apartment::counter = 0;

Apartment::Apartment()
{
	++counter;
}

Apartment::Apartment(Apartment && other)
{
	humans = std::move(other.humans);
	number = std::move(other.number);
}

Apartment::~Apartment()
{
}

int Apartment::getNumber()
{
	return number;
}

void Apartment::setNumber(int number)
{
	this->number = number;
}

bool Apartment::showAllApartmentTenants()
{
	for (Human human : humans)
	{
		if (human.getFirstName() != "")
		{
			std::cout << human.getFirstName() << " "
				<< human.getLastName() << std::endl;
			return true;
		}
		else
		{
			return false;
			break;
		}
	}
}

std::vector<Human> Apartment::getHumans()
{
	return humans;
}

void Apartment::addHumans(std::string firstName, std::string lastName)
{
	humans.push_back(Human(firstName, lastName));
	this->number = counter;
}

