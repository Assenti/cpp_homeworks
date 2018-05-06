#pragma once
#include <iostream>
#include <string>

class Student
{
private:
	std::string name;
	int age;
	double rating;
public:
	Student();
	Student(std::string);
	Student(Student &&);
	~Student();

	void setName(std::string);
	std::string getName();
	void setAge(int);
	int getAge();
	void setRating(double);
	double getRating();
};

