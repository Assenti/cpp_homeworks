#include "Body.h"

void Body::info()
{
	std::cout << "Body type: " << type << std::endl;
}

Body::Body(std::string _type)
{
	type = _type;
}

Body::~Body()
{
}
