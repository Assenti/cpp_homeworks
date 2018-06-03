#include "InsertTestCase.h"

void InsertTestCase::setUp()
{
	res = new MyReceiver();
}

void InsertTestCase::test()
{
	res->insert(0, "text");
	assert(res->getDoneCommands().size() == 1);
}

void InsertTestCase::clean()
{
	delete res;
}

InsertTestCase::InsertTestCase()
{
}


InsertTestCase::~InsertTestCase()
{
}
