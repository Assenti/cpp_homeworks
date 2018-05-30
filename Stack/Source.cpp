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
	mystacks::Stack<int, 5> x;
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
	mystacks::Stack<int, 5> x;
	try
	{
		x.pop();
	}
	catch (const customException::CustomException & ex)
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
			mystacks::StackFactory::creatStacks();
		}
		catch (const std::bad_alloc & ex)
		{
			assert(ex.what() == "bad allocation");
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