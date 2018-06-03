#include "UndoTestCase.h"

void UndoTestCase::setUp()
{
	res = new MyReceiver();
	res->insert(0, "ba");
}

void UndoTestCase::test()
{
	res->undo();
	assert(res->getDoneCommands().size() == 0);
}

void UndoTestCase::clean()
{
	delete res;
}

UndoTestCase::UndoTestCase()
{
}


UndoTestCase::~UndoTestCase()
{
}
