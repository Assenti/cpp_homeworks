#pragma once
#include "Stack.h"
#include <exception>
#include <iostream>
#include <vector>

namespace mystacks
{ 
class StackFactory
{
public:
	static void createOneStack();
	static void creatStacks();
	StackFactory();
	~StackFactory();
};
}

