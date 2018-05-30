#pragma once
#include <iostream>
class IServer
{
public:
	virtual void receiveData() = 0;
	IServer();
	~IServer();
};

