#pragma once
#include "Contact.h"
#include <vector>
#include <string>
#include <fstream>
std::string file = "PhoneContacts.txt";

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
	void addNewContact(char *, long long int);
	void deleteContact(char *);
	void showContacts();
	Contact searchContact(char *);
	void saveToFile();
	void readFromFile();
};

