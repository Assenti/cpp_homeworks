#pragma once
#include<string>
#include<iostream>
class Doors
{
protected:
	std::string opening_type; // default, lambo_style ...
public:
	virtual void info();
	Doors(std::string);
	virtual ~Doors();
};

