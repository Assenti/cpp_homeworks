#pragma once
#include<exception>
class CustomException : std::exception
{
public:
	const char * message;
	char const* what() const override final;
	CustomException(const char *);
	virtual ~CustomException();
};

