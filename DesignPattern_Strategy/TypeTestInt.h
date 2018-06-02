#pragma once
#include "TestCase.h"
#include "Receiver.h"
#include "StrategyOne.h"
#include "StrategyTwo.h"
class TypeTestInt :
	public TestCase
{
public:
	Receiver * receiver;
	void setUp();
	void test();
	void clean();
	TypeTestInt();
	~TypeTestInt();
};

