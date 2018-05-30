#include "CustomException.h"

char const * customException::CustomException::what() const
{
	return message;
}

customException::CustomException::CustomException(const char * _message)
{
	message = _message;
}


customException::CustomException::~CustomException()
{
}
