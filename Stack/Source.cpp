#include <vector>
#include <cassert>
#include <exception>
#include <iostream>
#include "Stack.h"
#include "CustomException.h"
#include "StackFactory.h"
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
		assert((std::string)ex.what() == (std::string)"Stackoverflow");
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
		assert((std::string)ex.what() == (std::string)"There is no elements");
	}
}

void test_createStack()
{
	int iter = 4;
	while (iter > 0)
	{
		try
		{
			stackFactory::StackFactory::creatStacks();
		}
		catch (const std::bad_alloc & ex)
		{
			assert((std::string)ex.what() == (std::string)"bad allocation");
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
	mystack::StackDynamic<int> stack;
	
	std::vector<void(*)(void)> tests = { test_push, test_pop, test_createStack };
	for (auto test : tests)
	{
		global_testing(test);
	}


	system("pause");
	return 0;
}