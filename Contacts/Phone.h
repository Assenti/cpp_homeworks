#pragma once
#include "Contact.h"

class Phone
{
private:
	Phone();
	std::vector<Contact> contacts;
	std::string phone_name;
public:
	static Phone & getInstance();
	~Phone();
	void setPhoneName(std::string);
	std::string getPhoneName();
	void addNewContact(std::string, long long int);
	void deleteContact(std::string);
	void showContacts();
	Contact searchContact(std::string);
	void saveToFile();
	void readFromFile();
};

