#pragma once
#include "Server.h"

class Proxy
	: public IServer
{
private:
	IServer * server;
public:
	void createServer();
	void receiveData(std::string) override final;
	void sendData() override final;
	Proxy();
	~Proxy();
};

