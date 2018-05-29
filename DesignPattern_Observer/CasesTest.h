#pragma once
#include <cassert>
class CasesTest
{
public:
	virtual void setUp() = 0;
	virtual void test() = 0;
	virtual void clean() = 0;
	CasesTest();
	virtual ~CasesTest();
};

