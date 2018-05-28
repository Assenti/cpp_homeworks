#pragma once
#include "Stack.h"
#include <exception>
#include <iostream>


class StackFactory
{
public:
	static void createStack();
	StackFactory();
	~StackFactory();
};

