#pragma once
#include<exception>
class StackFactoryException : std::exception
{
public:
	char const* what() const override final;
	StackFactoryException();
	~StackFactoryException();
};

