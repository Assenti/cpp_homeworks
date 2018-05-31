#include "Proxy.h"



void Proxy::createServer()
{
	if (server == nullptr)
	{
		server = new Server();
	}
}

void Proxy::receiveData(std::string data)
{
	server->receiveData(data);
	sendData();
}

void Proxy::sendData()
{
	server->sendData();
}

Proxy::Proxy()
{
	server = nullptr;
}


Proxy::~Proxy()
{
}
