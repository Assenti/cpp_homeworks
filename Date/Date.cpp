#include "Date.h"

Date::Date()
{
}

Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

Date::~Date()
{
}

Date Date::operator-(Date other)
{
	Date temp;
	int result = 0;
	result += this->day - other.day;
	result += (this->month - other.month) * 30;
	result += (this->year - other.year) * 30 * 12;
	temp.year = result / 12;
	temp.month = result / 12 / 30;
	temp.day = result % 12 % 30;
	return temp;
}
