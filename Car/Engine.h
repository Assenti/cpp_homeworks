#pragma once
#include<iostream>
class Engine
{
protected:
	int power; // in horse forces
public:
	virtual void info();
	Engine(int);
	virtual ~Engine();
};

