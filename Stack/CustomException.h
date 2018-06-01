#pragma once
#include<exception>
namespace customException 
{

class CustomException : std::exception
{
	const char * message;
public:
	char const* what() const override final;
	CustomException(const char *);
	virtual ~CustomException();
};
}
