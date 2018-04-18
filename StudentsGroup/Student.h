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
	~Student();
	//Getters&Setters
	void setName(std::string _name);
	std::string getName();
	void setAge(int _age);
	int getAge();
	void setRating(double _rating);
	double getRating();
};

