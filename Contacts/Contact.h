#pragma once
#include <iostream>

class Contact
{
private:
	char * full_name;
	long long int mobile;
public:
	Contact();
	Contact(char *, long long int);
	~Contact();
	void setFullName(char * full_name);
	char * getFullName();
	void setMoblie(long long int mobile);
	long long int getMobile();
};

