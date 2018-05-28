#pragma once
#include<exception>
class CustomException : std::exception
{
public:
	char const* what() const override final;
	CustomException();
	~CustomException();
};

