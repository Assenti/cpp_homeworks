#pragma once
#include<exception>
class CustomException : std::exception
{
public:
	char const* what() const;
	CustomException();
	~CustomException();
};

