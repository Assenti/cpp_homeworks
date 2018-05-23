#pragma once
#include <string>
#include <iostream>
class MyStudent
{
protected:
	int id;
	std::string name;
	static int counter;
public:
	MyStudent(std::string);
	virtual void info();
	virtual ~MyStudent();
};

