#pragma once
class OperatorsOverloads
{
private:
	int salary, experience;
public:
	int x;
	OperatorsOverloads();
	bool operator >(const OperatorsOverloads &) const;
	bool operator <(const OperatorsOverloads &) const;
	bool operator <=(const OperatorsOverloads &) const;
	bool operator >=(const OperatorsOverloads &) const;
	bool operator ==(const OperatorsOverloads &) const;
	void operator =(const int);
	void operator +=(const int);
	OperatorsOverloads & operator++();
	OperatorsOverloads & operator++(int);
	int getSalary();
	void setSalary(int);
	int getExperience();
	void setExperience(int);
	~OperatorsOverloads();
};

