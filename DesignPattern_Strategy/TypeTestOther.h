#pragma once
#include "TestCase.h"
#include "Receiver.h"
class TypeTestOther :
	public TestCase
{
public:
	Receiver * receiver;
	void setUp();
	void test();
	void clean();
	TypeTestOther();
	~TypeTestOther();
};

