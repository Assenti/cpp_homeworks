#pragma once
#include <vector>
#include "TestCase.h"
class Test
{
public:
	std::vector<TestCase *> tests;
	void init_testing();
	Test();
	~Test();
};

