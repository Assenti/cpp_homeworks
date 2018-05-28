#pragma once
#include<exception>
class CustomStackoverflowException : std::exception
{
public:
	char const* what() const;
	CustomStackoverflowException();
	~CustomStackoverflowException();
};

