#pragma once
#include <exception>

class MyException : public std::exception
{
	char const* message;
public:
	char const* what() const;
	MyException(const char *);
	~MyException();
};

