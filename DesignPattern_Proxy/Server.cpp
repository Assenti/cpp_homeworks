#include "Server.h"



void Server::receiveData(std::string data)
{
	std::cout << "I received: " << data << std::endl;
}

void Server::sendData()
{
	std::cout << "Data successfully received" << std::endl;
}

Server::Server()
{
}


Server::~Server()
{
}
