#pragma once
#include <string>

class Human
{
private:
	std::string firstName;
	std::string lastName;
public:
	std::string getFirstName();
	std::string getLastName();
	Human();
	Human(std::string, std::string);
	
	~Human();
};

