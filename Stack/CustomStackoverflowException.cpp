#include "CustomStackoverflowException.h"



char const * CustomStackoverflowException::what() const
{
	return "Stackoverflow";
}

CustomStackoverflowException::CustomStackoverflowException()
{
}


CustomStackoverflowException::~CustomStackoverflowException()
{
}
