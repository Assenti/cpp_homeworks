#pragma once
#include "MyStudent.h"
#include <string>
#include <iostream>
class Aspirant : public MyStudent
{
private:
	std::string scientific_work;
public:
	Aspirant(std::string, std::string);
	std::string getScientificWork();
	void info() override;
	~Aspirant();
};

