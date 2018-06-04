#include "Drawer.h"

void Drawer::draw(const IDrawable & drawable)
{
	drawable.draw();
}

void Drawer::initialDraw(std::initializer_list<IDrawable> drawables)
{
	for (IDrawable drawable : drawables) 
	{
		Drawer::draw(drawable);
	}
}

void Drawer::moveAndRedraw(Snake & snake)
{
	snake.move();
	snake.draw();
}

Drawer::Drawer()
{
}


Drawer::~Drawer()
{
}
