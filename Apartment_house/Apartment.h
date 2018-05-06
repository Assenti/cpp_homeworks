#pragma once
#include "Human.h"
#include <vector>
#include <string>
#include <iostream>

class Apartment
{
private:
	std::vector<Human> humans;
	int number;
	static int counter;
public:
	Apartment();
	Apartment(Apartment &&);
	~Apartment();
	int getNumber();
	void setNumber(int);
	bool showAllApartmentTenants();
	std::vector<Human> getHumans();
	void addHumans(std::string, std::string);
};

