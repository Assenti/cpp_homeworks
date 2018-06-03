#include "TypeTestString.h"

void TypeTestString::setUp()
{
	receiver = new Receiver();
}

void TypeTestString::test()
{
	receiver->getType("text"); // int type refers to StrategyOne that has id=1
	assert(receiver->getChosenStrategyId() == 1);
}

void TypeTestString::clean()
{
	delete receiver;
}

TypeTestString::TypeTestString()
{
}


TypeTestString::~TypeTestString()
{
}
