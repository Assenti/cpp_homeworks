#pragma once
#include<string>
#include<iostream>
class Body
{
protected:
	std::string type; // sedan, coupe, cabriolet ...
public:
	virtual void info();
	Body(std::string);
	virtual ~Body();
};

