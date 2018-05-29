#pragma once
#include <vector>
#include "CasesTest.h"
class FunctionalTest
{
public:
	std::vector<CasesTest *> testCases;
	void global_testing();
	FunctionalTest();
	~FunctionalTest();
};

