#include "MyException.h"

char const * MyException::what() const
{
	return message;
}

MyException::MyException(const char * message)
{
	this->message = message;
}


MyException::~MyException()
{
}
