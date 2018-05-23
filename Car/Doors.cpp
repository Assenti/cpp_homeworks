#include "Doors.h"

void Doors::info()
{
	std::cout << "Doors opening type: " << opening_type << std::endl;
}

Doors::Doors(std::string _opening_type)
{
	opening_type = _opening_type;
}


Doors::~Doors()
{
}
