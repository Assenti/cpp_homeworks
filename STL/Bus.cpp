#include "Bus.h"

Bus::Bus(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Bus::getX()
{
	return x;
}

int Bus::getY()
{
	return y;
}

Bus::~Bus()
{
}
