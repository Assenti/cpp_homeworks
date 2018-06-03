#include "TypeTestInt.h"

void TypeTestInt::setUp()
{
	receiver = new Receiver();
}

void TypeTestInt::test()
{
	receiver->getType(1); // int type refers to StrategyTwo that has id=2
	assert(receiver->getChosenStrategyId() == 2);
}

void TypeTestInt::clean()
{
	delete receiver;
}

TypeTestInt::TypeTestInt()
{
}


TypeTestInt::~TypeTestInt()
{
}
