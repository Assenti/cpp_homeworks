#include <iostream>
#include "Stack.h"
#include <vector>
#include <cassert>
#include <exception>
#include "CustomException.h"
#include "StackFactory.h"
#include "StackFactoryException.h"
#include "StackDynamic.h"


void test_push()
{
	Stack<int, 5> x;
	for (int i = 0; i < 5; i++)
	{
		x.push(i);
	}
	try
	{
		x.push(1);
	}
	catch (const std::overflow_error & ex)
	{
		assert(ex.what() == "Stackoverflow");
	}
}

void test_pop()
{
	Stack<int, 5> x;
	try
	{
		x.pop();
	}
	catch (const CustomException & ex)
	{
		assert(ex.what() == "There is no elements");
	}
}


void test_createStack()
{
	int iter = 4;
	while (iter > 0)
	{
		try
		{
			if (iter < 1)
				throw StackFactoryException();
			else
				StackFactory::createStack();
		}
		catch (const StackFactoryException & ex)
		{
			assert(ex.what() == "StackFactory exception");
		}
		iter--;
	}
}

void global_testing(void(*tested_function)(void))
{
	tested_function();
}

int main()
{
	
	std::vector<void(*)(void)> tests = { test_push, test_pop, test_createStack };
	for (auto test : tests)
	{
		global_testing(test);
	}


	system("pause");
	return 0;
}