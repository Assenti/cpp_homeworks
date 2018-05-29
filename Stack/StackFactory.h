#pragma once
#include "Stack.h"
#include <exception>
#include <iostream>
#include <vector>

class StackFactory
{
public:
	static void createOneStack();
	static void creatStacks();
	StackFactory();
	~StackFactory();
};

