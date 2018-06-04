#include "IDrawable.h"

void IDrawable::draw() const
{
	for (Pixel pixel : body)
	{
		pixel.draw(sign);
	}
}

IDrawable::IDrawable()
{
}


IDrawable::~IDrawable()
{
}
