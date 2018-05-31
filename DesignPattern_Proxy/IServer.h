#pragma once
#include <iostream>
class IServer
{
public:
	virtual void receiveData(std::string) = 0;
	virtual void sendData() = 0;
	IServer();
	virtual ~IServer();
};

