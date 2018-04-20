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

void Phone::addNewContact(std::string full_name, long long int mobile)
{
	contacts.push_back(Contact(full_name, mobile));
}
void Phone::deleteContact(std::string full_name)
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
		std::cout << "NAME: " << c.getFullName() << " PHONE: " << c.getMobile() << std::endl;
	}
}

Contact Phone::searchContact(std::string full_name)
{
	return Contact();
}

void Phone::saveToFile()
{
	std::ofstream out("PhoneContacts.txt");
	for (Contact c : contacts)
	{
		out << c.getFullName() << c.getMobile();
	}
	out.close();
}

void Phone::readFromFile()
{
	std::ifstream in("PhoneContacts.txt");
	for (Contact c : contacts)
	{
		in >> c.getFullName() >> c.getMobile();
	}
	in.close();
}
