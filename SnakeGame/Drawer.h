#pragma once
#include "IDrawable.h"
#include "Snake.h"
class Drawer
{
public:
	static void draw(const IDrawable &);
	static void initialDraw(std::initializer_list<IDrawable>);
	static void moveAndRedraw(Snake &);
	Drawer();
	~Drawer();
};

