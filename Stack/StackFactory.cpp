#include "StackFactory.h"

void mystacks::StackFactory::createOneStack()
{
	mystacks::Stack<int, 5> stack;
}

void  mystacks::StackFactory::creatStacks()
{
	for (int i = 0; i < 100; i++)
	{
		if (i > 3)
			throw std::bad_alloc();
		createOneStack();
	}
}

mystacks::StackFactory::StackFactory()
{
}


mystacks::StackFactory::~StackFactory()
{
}
