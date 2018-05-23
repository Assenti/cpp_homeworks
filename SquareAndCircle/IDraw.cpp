#include "IDraw.h"

void IDraw::draw()
{
	for (MyPixel pixel : body)
	{
		pixel.draw(sign);
	}
}

IDraw::IDraw()
{
}


IDraw::~IDraw()
{
}
