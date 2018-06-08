#pragma once
#include <string>
class Pupil
{
	std::string name;
	int age;
	double height, weight;
public:
	std::string getName();
	int getAge();
	double getHeight();
	double getWeight();
	//1.name; 2.age; 3.height; 4.weight 
	Pupil(std::string, int, double, double);
	~Pupil();
};

