#include "StackFactory.h"

void StackFactory::createOneStack()
{
	Stack<int, 5> stack;
}

void StackFactory::creatStacks()
{
	for (int i = 0; i < 100; i++)
	{
		if (i > 3)
			throw std::bad_alloc();
		createOneStack();
	}
}

StackFactory::StackFactory()
{
}


StackFactory::~StackFactory()
{
}
