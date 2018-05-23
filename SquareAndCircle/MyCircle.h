#pragma once
#include<iostream>
class MyCircle
{
protected:
	int radius;
public:
	MyCircle(int);
	virtual void info();
	virtual ~MyCircle();
};

