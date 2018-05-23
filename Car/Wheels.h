#pragma once
#include<iostream>
class Wheels
{
protected:
	int size; //R 14, 15, 16 ... 
public:
	virtual void info();
	Wheels(int);
	virtual ~Wheels();
};

