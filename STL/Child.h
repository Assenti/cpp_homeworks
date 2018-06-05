#pragma once
#include <string>
class Child
{
public:
	std::string name;
	int age;
	double height, weight;
	Child(std::string, int, double, double);
	~Child();
};

