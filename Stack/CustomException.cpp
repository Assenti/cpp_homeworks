#include "CustomException.h"

char const * CustomException::what() const
{
	return message;
}

CustomException::CustomException(const char * _message)
{
	message = _message;
}


CustomException::~CustomException()
{
}
