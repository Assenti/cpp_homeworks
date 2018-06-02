#include "TypeTestString.h"

void TypeTestString::setUp()
{
	receiver = new Receiver();
}

void TypeTestString::test()
{
	try
	{
		receiver->getType(0);
	}
	catch (const MyException & ex)
	{
		assert(ex.what() == "Not a string");
	}
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
