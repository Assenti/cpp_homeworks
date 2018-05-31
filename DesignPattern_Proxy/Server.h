#pragma once
#include "IServer.h"
#include <iostream>
#include <string>
class Server :
	public IServer
{
public:
	void receiveData(std::string) override final;
	void sendData() override final;
	Server();
	~Server();
};

