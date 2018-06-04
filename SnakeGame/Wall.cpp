#include "Wall.h"

Wall::Wall()
{
	sign = '#';
	for (short i = 1; i <= 20; ++i) 
	{
		body.push_back(Pixel(1, i));
		body.push_back(Pixel(i, 1));
		body.push_back(Pixel(20, i));
		body.push_back(Pixel(i, 20));
	}
}

Wall::~Wall()
{
}
