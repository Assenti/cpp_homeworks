#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee
{
private:
	string firstName, lastName, position;
	int year;
	double salary;
public:
	Employee(string, string, string, int, double);
	~Employee();
	string getFirstName() const;
	void setFirstName(string);
	string getLastName() const;
	void setLastName(string);
	string getPosition() const;
	void setPosition(string);
	int getYear() const;
	void setYear(int);
	double getSalary() const;
	void setSalary(double);
};

