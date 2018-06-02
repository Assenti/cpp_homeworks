#pragma once
#include <cassert>
class TestCase
{
public:
	virtual void setUp() = 0;
	virtual void test() = 0;
	virtual void clean() = 0;
	TestCase();
	virtual ~TestCase();
};

