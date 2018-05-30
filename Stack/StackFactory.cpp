#include "StackFactory.h"

void stackFactory::StackFactory::createOneStack()
{
	Stack<int, 5> stack;
}

void  stackFactory::StackFactory::creatStacks()
{
	for (int i = 0; i < 100; i++)
	{
		if (i > 3)
			throw std::bad_alloc();
		createOneStack();
	}
}

stackFactory::StackFactory::StackFactory()
{
}


stackFactory::StackFactory::~StackFactory()
{
}
