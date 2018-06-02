#include "TypeTestOther.h"



void TypeTestOther::setUp()
{
	receiver = new Receiver;
}

void TypeTestOther::test()
{
	try
	{
		receiver->getType(3.14);
	}
	catch (const MyException & ex)
	{
		assert(ex.what() == "Type is not provided");
	}
}

void TypeTestOther::clean()
{
	delete receiver;
}

TypeTestOther::TypeTestOther()
{
}


TypeTestOther::~TypeTestOther()
{
}
