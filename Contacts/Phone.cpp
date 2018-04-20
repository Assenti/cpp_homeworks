#include "Phone.h"

Phone::Phone(){}
Phone & Phone::getInstance()
{
	static Phone instance;
	return instance;
}
Phone::~Phone(){}

void Phone::setPhoneName(std::string phone_name)
{
	this->phone_name = phone_name;
}

std::string Phone::getPhoneName()
{
	return phone_name;
}

void Phone::addNewContact(char* full_name, long long int mobile)
{
	contacts.push_back(Contact(full_name, mobile));
}

void Phone::deleteContact(char* full_name)
{
	int i = 0;
	for (Contact c : contacts)
	{
		if (c.getFullName() == full_name)
		{
			contacts.erase(contacts.begin() + i);
		}
		i++;
	}
}

void Phone::showContacts()
{
	for (Contact c : contacts)
	{
		std::cout << c.getFullName() << " " << c.getMobile() << std::endl;
	}
}

Contact Phone::searchContact(char * full_name)
{
	return Contact();
}

void Phone::saveToFile()
{
	std::ofstream out(file);
}

void Phone::readFromFile()
{
	std::ifstream in(file);
}
