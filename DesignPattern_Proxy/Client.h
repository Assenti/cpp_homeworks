#pragma once
#include <string>
class Client
{
private:
	std::string data;
public:
	std::string getData();
	Client(std::string);
	~Client();
};

