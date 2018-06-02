#pragma once
#include "TestCase.h"
#include "Receiver.h"
#include "StrategyOne.h"
#include "StrategyTwo.h"

class TypeTestString :
	public TestCase
{
public:
	Receiver * receiver;
	void setUp();
	void test();
	void clean();
	TypeTestString();
	~TypeTestString();
};

