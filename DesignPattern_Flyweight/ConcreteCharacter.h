#pragma once
#include <iostream>
#include "Character.h"
class ConcreteCharacter :
	public Character
{
public:
	ConcreteCharacter(char, int);
	virtual void display() const;
	~ConcreteCharacter();
};

