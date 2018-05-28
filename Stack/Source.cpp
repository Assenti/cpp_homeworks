#include <iostream>
#include "Stack.h"
#include "StackDynamic.h"
#include <stack>
#include <cassert>
#include <exception>
#include "CustomException.h"
#include "StackFactory.h"
#include "StackFactoryException.h"
#include <vector>

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
		assert(ex.what() == "stackoverflow");
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
		if (iter > 3)
		{
			throw std::bad_alloc();
		}
		StackFactory::createStack();
	}
	try
	{
		StackFactory::createStack();
	}
	catch (const CustomException & ex)
	{
		assert(ex.what(), "There is no elements");
	}
}

void global_testing(void(*tested_function)(void))
{
	tested_function();
}

int main()
{
	
	std::vector<void(*)(void)> tests = { test_push, test_pop };
	for (auto test : tests)
	{
		global_testing(test);
	}


	system("pause");
	return 0;
}