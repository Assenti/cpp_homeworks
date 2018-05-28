#include "CustomException.h"



char const * CustomException::what() const
{
	return "There is no elements";
}

CustomException::CustomException()
{
}


CustomException::~CustomException()
{
}
