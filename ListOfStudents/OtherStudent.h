#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class OtherStudent
{
private:
	std::string name;
	int grade, id;
	static int counter;
public:
	OtherStudent(std::string, int, int);
	~OtherStudent();
	void setName(std::string);
	std::string getName();
	void setGrade(int);
	int getGrade();
	void setId(int);
	int getId();
	int getCounter();
};

