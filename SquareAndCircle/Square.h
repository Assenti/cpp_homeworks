#pragma once
#include<iostream>
class Square
{
protected:
	int side;
public:
	Square(int);
	virtual void info();
	virtual ~Square();
};

