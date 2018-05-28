#include "StackFactoryException.h"



char const * StackFactoryException::what() const
{
	return "StackFactory exception";
}

StackFactoryException::StackFactoryException()
{
}


StackFactoryException::~StackFactoryException()
{
}
