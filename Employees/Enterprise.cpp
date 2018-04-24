#include "Enterprise.h"

Enterprise::Enterprise()
{
}
Enterprise::~Enterprise()
{
}

void Enterprise::addEmployee(string firstName, string lastName, string position, int year, double salary)
{
	employees.push_back(Employee(firstName, lastName, position, year, salary));
}

void Enterprise::showAllEmployees() const
{
	for (Employee employee : employees)
	{
		cout << employee.getFirstName() << " " << employee.getLastName() <<
			" " << employee.getPosition() << " " << employee.getYear() <<
			" " << employee.getSalary() << endl;
	}
}

vector<Employee> Enterprise::filterByLengthExperience(int year) const
{
	vector<Employee> output;
	for (Employee employee : employees)
	{
		if (employee.getYear() >= year)
		{
			output.push_back(employee);
		}
	}
	return output;
}

vector<Employee> Enterprise::filterBySalary(double salary) const
{
	vector<Employee> output;
	for (Employee employee : employees)
	{
		if (employee.getSalary() >= salary)
		{
			output.push_back(employee);
		}
	}
	return output;
}

vector<Employee> Enterprise::filterByPosition(string position) const
{
	vector<Employee> output;
	for (Employee employee : employees)
	{
		if (employee.getPosition() == position)
		{
			output.push_back(employee);
		}
	}
	return output;
}

void Enterprise::showFilterResults(vector<Employee> output) const
{
	for (Employee employee : output)
	{
		cout << employee.getFirstName() << " " << employee.getLastName() <<
			" " << employee.getPosition() << " " << employee.getYear() <<
			" " << employee.getSalary() << endl;
	}
}
