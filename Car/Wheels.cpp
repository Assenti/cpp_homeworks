#include "Wheels.h"



void Wheels::info()
{
	std::cout << "Wheels size: " << size << std::endl;
}

Wheels::Wheels(int _size)
{
	size = _size;
}


Wheels::~Wheels()
{
}
