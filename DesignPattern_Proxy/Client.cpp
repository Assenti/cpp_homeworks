#include "Client.h"



std::string Client::getData()
{
	return data;
}

Client::Client(std::string data)
{
	this->data = data;
}


Client::~Client()
{
}
