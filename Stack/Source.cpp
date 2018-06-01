#include <vector>
#include <cassert>
#include <exception>
#include <iostream>
#include <string>
#include "Stack.h"
#include "CustomException.h"
#include "StackFactory.h"
#include "StackDynamic.h"

int string_to_int(const std::string & s);
void test_push();
void test_pop();
void test_createStack();
void global_testing(void(*tested_function)(void));
void test_stoi_out();
void test_stoi_NaN();

int main()
{	
	std::vector<void(*)(void)> tests = { 
		test_push, test_pop, test_createStack, test_stoi_out, test_stoi_NaN };
	for (auto test : tests)
		global_testing(test);

	system("pause");
	return 0;
}

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
		assert((std::string)ex.what() == (std::string)"Stackoverflow");
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
			mystacks::StackFactory::creatStacks();
		}
		catch (const std::bad_alloc & ex)
		{
			assert((std::string)ex.what() == (std::string)"bad allocation");
		}
		iter--;
	}
}


void test_stoi_NaN()
{
	std::string number = "abc";
	try
	{
		string_to_int(number);
	}
	catch (const customException::CustomException & ex)
	{
		assert((std::string)ex.what() == (std::string)"NaN");
	}
}

void test_stoi_out()
{
	std::string number = "2147483648";
	try
	{
		string_to_int(number);
	}
	catch (const customException::CustomException & ex)
	{
		assert((std::string)ex.what() == (std::string)"Out of range of int");
	}
}

void global_testing(void(*tested_function)(void))
{
	tested_function();
}

int string_to_int(const std::string & s)
{
	int res = 0, rad = 1;
	for (auto a : s)
		if ((int)a < 48 && (int)a > 57)
			throw customException::CustomException("NaN");
	if (s.length() == 10 && s > "2147483647")
		throw customException::CustomException("Out of range of int");
	if (s.length() > 10)
		throw customException::CustomException("Out of range of int");
	for (int i = s.length() - 1; i >= 0; i--)
	{
		res += ((int)s[i] - 48) * rad;
		rad *= 10;
	}
	return res;
}