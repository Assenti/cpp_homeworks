#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

class Contact
{
private:
	std::string full_name;
	long long int mobile;
public:
	Contact();
	Contact(std::string , long long int);
	~Contact();
	void setFullName(std::string);
	std::string getFullName();
	void setMoblie(long long int);
	long long int getMobile();
};

