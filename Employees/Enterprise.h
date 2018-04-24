#pragma once
#include "Employee.h"
using namespace std;

class Enterprise
{
private:
	Enterprise();
	vector<Employee> employees;
public:
	static Enterprise & getInstance()
	{
		static Enterprise instance;
		return instance;
	}
	~Enterprise();
	void addEmployee(string, string, string, int, double);
	void showAllEmployees() const;
	vector<Employee> filterByLengthExperience(int) const;
	vector<Employee> filterBySalary(double) const;
	vector<Employee> filterByPosition(string) const;
	void showFilterResults(vector<Employee>) const;
	
};

