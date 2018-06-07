#pragma once
class Date
{
public:
	int day, month, year;
	Date();
	Date(int, int, int);
	~Date();
	Date operator -(Date);
};

