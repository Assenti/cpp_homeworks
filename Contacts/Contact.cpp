#include "Contact.h"

Contact::Contact()
{
}
Contact::Contact(char * full_name, long long int mobile)
{
	this->full_name = full_name;
	this->mobile = mobile;
}
Contact::~Contact()
{
	delete[] full_name;
}
void Contact::setFullName(char * full_name)
{
	this->full_name = full_name;
}
char * Contact::getFullName()
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
