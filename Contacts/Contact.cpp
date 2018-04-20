#include "Contact.h"

Contact::Contact(){}
Contact::Contact(std::string full_name, long long int mobile)
{
	this->full_name = full_name;
	this->mobile = mobile;
}
Contact::~Contact(){}
void Contact::setFullName(std::string full_name)
{
	this->full_name = full_name;
}
std::string Contact::getFullName()
{
	return full_name;
}
void Contact::setMoblie(long long int mobile)
{
	this->mobile = mobile;
}
long long int Contact::getMobile()
{
	return mobile;
}
