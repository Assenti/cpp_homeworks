#include "TypeTestInt.h"

void TypeTestInt::setUp()
{
	receiver = new Receiver();
}

void TypeTestInt::test()
{
	try
	{
		receiver->getType("text");
	}
	catch (const MyException & ex)
	{
		assert(ex.what() == "Not an integer");
	}
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
